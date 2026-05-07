// Function: FUN_019de330
// Address: 019de330
// Size: 1256 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019de786) */
/* WARNING: Removing unreachable block (ram,0x019de78f) */
/* WARNING: Removing unreachable block (ram,0x019de7e6) */
/* WARNING: Removing unreachable block (ram,0x019de7ef) */
/* WARNING: Removing unreachable block (ram,0x019de772) */
/* WARNING: Removing unreachable block (ram,0x019de77b) */

ulonglong FUN_019de330(pthread_key_t param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  bool bVar8;
  double dVar9;
  double dVar10;
  longlong local_90;
  char local_88;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  cVar2 = (**(code **)((longlong)&dylib_command_00001288.dylib.current_version + *unaff_RDI))();
  if (cVar2 == '\0') goto LAB_019de635;
  if (param_2 != '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_40 == 0) {
      bVar8 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      bVar8 = local_58 != 0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar8) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar9 = (double)FUN_01259520();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_012f9490();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (dVar9 <= dVar10) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_01259520();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_012f7cb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (dVar10 <= dVar9) goto LAB_019de63c;
      }
LAB_019de635:
      uVar7 = 0;
      goto LAB_019de807;
    }
  }
LAB_019de63c:
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    bVar1 = true;
    bVar8 = false;
LAB_019de7c3:
    uVar3 = (**(code **)(*unaff_RDI + 0xa40))();
    uVar7 = (ulonglong)uVar3;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pvVar4 = _pthread_getspecific(param_1);
    lVar6 = local_58;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      lVar6 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
    FUN_012ebc80();
    if (local_40 == 0) {
      local_40 = 0;
      bVar8 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar8 = true;
    }
    else {
      bVar8 = true;
    }
    bVar1 = true;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_019de7c3;
    uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
    bVar1 = false;
    if (*(int *)(local_40 + 0xc) == 0) goto LAB_019de7c3;
  }
  if ((bVar8) && (!bVar1)) {
    FUN_00d50b20();
  }
LAB_019de807:
  return uVar7 & 0xffffffff;
}


