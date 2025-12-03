#include "SOTS_FXTagCatalog.h"

const USOTS_FXCueDefinition* USOTS_FXTagCatalog::FindCueDefinition(FGameplayTag Tag) const
{
    if (!Tag.IsValid())
    {
        return nullptr;
    }

    for (const FSOTS_FXTagCatalogEntry& Entry : Entries)
    {
        if (Entry.FXTag == Tag)
        {
            return Entry.CueDefinition.LoadSynchronous();
        }
    }

    return nullptr;
}

bool USOTS_FXTagCatalog::HasTag(FGameplayTag Tag) const
{
    return FindCueDefinition(Tag) != nullptr;
}
