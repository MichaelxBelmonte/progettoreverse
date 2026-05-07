// Function: FUN_01948420
// Address: 01948420
// Size: 986 bytes
// Class: QualityScoring
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01948420(void)

{
  char cVar1;
  int64_t lVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar6;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int local_48;
  int iStack_44;
  int local_40;
  
  local_50 = *arg1;
  if (*(int *)(local_50 + 0xc) == *(int *)(this_ptr[0xbc] + 0xc)) {
    local_58 = 0;
    local_60 = 0;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    bVar6 = true;
    while( true ) {
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
      lVar2 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(local_50 + 0xc) <= local_48) break;
      local_70 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar2 * 8);
      local_68 = '\0';
      local_60 = local_70;
      cVar1 = FUN_00d23d70();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        bVar6 = false;
      }
    }
    FUN_00115190();
    if (!bVar6) {
      FUN_00d216c0();
      local_60 = *arg1;
      local_58 = '\0';
      FUN_00d214d0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar5 = 0x2572358;
      *puVar3 = &g_02572358;
      (*g_02572370)();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr[0xbc] != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        iStack_44 = 0;
        local_40 = 0;
        local_50 = this_ptr[0xbc];
        while( true ) {
          if (iStack_44 != 0) {
            if (iStack_44 < 1) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              local_40 = local_40 + iStack_44;
              iStack_44 = 0;
            }
          }
          lVar2 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(local_50 + 0xc) <= local_48) break;
          local_a0 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar2 * 8);
          local_98 = '\0';
          local_60 = local_a0;
          (**(code **)(&UNK_00001698 + *this_ptr))(0,&local_a0);
          lVar2 = local_80;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_70 = lVar2;
          local_68 = '\0';
          FUN_00d21140();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar2 = local_50;
        FUN_00115190();
        pVar5 = (void*)lVar2;
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_88 = '\0';
      local_90 = puVar3;
      FUN_019a4000();
      if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

