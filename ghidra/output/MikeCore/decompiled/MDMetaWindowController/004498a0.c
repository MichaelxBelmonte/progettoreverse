// Function: FUN_004498a0
// Address: 004498a0
// Size: 1164 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x004498fd) */
/* WARNING: Removing unreachable block (ram,0x00449906) */

ulonglong FUN_004498a0(pthread_key_t param_1,int param_2)

{
  pthread_key_t pVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if ((param_2 == 0) || (*(longlong *)(unaff_RDI + 0x78) == 0)) goto LAB_00449d1a;
  FUN_00448850();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0044990b;
    }
  }
  else if (local_40 != 0) {
LAB_0044990b:
    uVar8 = (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x930))();
    iVar4 = FUN_01caecd0();
    if (iVar4 == 1) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = FUN_01caecd0();
    if ((iVar4 == 1) || (iVar4 = FUN_01caecd0(), iVar4 == 2)) {
      plVar2 = *(longlong **)(unaff_RDI + 0x78);
      (**(code **)(*plVar2 + 0x6b0))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      uVar9 = FUN_01e3f820();
      (**(code **)(*plVar2 + 0x6d8))(uVar9,0);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific(param_1);
    pVar1 = (pthread_key_t)local_40;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = pVar1;
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    cVar3 = FUN_00db3690();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = pVar1;
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific(param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = pVar1;
    }
    FUN_012cb110();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2610();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012a4680(uVar8);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = pVar1;
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = FUN_01caecd0();
    if (iVar4 == 3) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_00449d1a;
  }
  uVar7 = 0;
LAB_00449d1a:
  return uVar7 & 0xffffffff;
}


