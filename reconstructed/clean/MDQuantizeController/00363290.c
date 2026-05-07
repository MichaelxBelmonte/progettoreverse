// Function: FUN_00363290
// Address: 00363290
// Size: 1257 bytes
// Class: MDQuantizeController
// === MDQuantizeController properties ===
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


void FUN_00363290(void* param_1)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t lVar4;
  void* pVar5;
  char *pcVar6;
  int iVar7;
  int64_t local_c0;
  char local_b8;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t local_58;
  char local_50;
  char *local_48;
  char local_40 [8];
  char *local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_b8 == '\0') && (local_c0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  if (local_c0 != 0) {
    if (0 < *(int *)(local_c0 + 0xc)) {
      iVar7 = 0;
      do {
        FUN_004f9670();
        pcVar1 = local_48;
        local_68 = local_40[0];
        pcVar6 = &local_68;
        pcVar3 = local_40;
        if (local_40[0] == '\0') {
          pcVar3 = pcVar6;
        }
        *pcVar3 = '\0';
        if ((local_40[0] != '\0') && (pcVar1 != (char *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = pcVar1;
        pvVar2 = _pthread_getspecific((void*)pcVar6);
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          pcVar6 = local_38;
        }
        pVar5 = (void*)pcVar6;
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7d10();
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2610();
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012a46e0();
        FUN_004fac10();
        if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(pVar5);
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          pVar5 = (void*)local_38;
        }
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f49e0();
        FUN_004f7990();
        pvVar2 = _pthread_getspecific(pVar5);
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          pVar5 = (void*)local_38;
        }
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f49f0();
        FUN_004f7900();
        if ((local_68 != '\0') && (local_38 != (char *)0x0)) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(local_c0 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}

