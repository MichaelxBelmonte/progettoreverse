// Function: FUN_01ba2680
// Address: 01ba2680
// Size: 632 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01ba2772) */
/* WARNING: Removing unreachable block (ram,0x01ba277b) */
/* WARNING: Removing unreachable block (ram,0x01ba289b) */
/* WARNING: Removing unreachable block (ram,0x01ba28a8) */

ulonglong FUN_01ba2680(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  void *pvVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  
  uVar3 = (**(code **)(*unaff_RDI + 0x688))();
  uVar5 = (ulonglong)uVar3;
  if (((char)uVar3 != '\0') && (param_2 != '\0')) {
    plVar1 = (longlong *)unaff_RDI[0x1c];
    (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x960))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    fVar6 = (float)(**(code **)(*plVar1 + 0x380))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    uVar7 = (**(code **)(*unaff_RDI + 0x3f8))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      uVar7 = FUN_00d50b00();
    }
    if (0 < *(int *)(local_48 + 0xc)) {
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + uVar5 * 8);
        if (lVar2 != 0) {
          uVar7 = FUN_00d50b00();
        }
        local_70 = '\0';
        local_78 = lVar2;
        FUN_019a54a0(uVar7,&local_78);
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01259600(fVar6);
        }
        else {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar8 = (float)FUN_00d459e0();
          FUN_01259600(fVar8 + fVar6);
          uVar7 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar7 = FUN_00d50b20();
        }
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)*(int *)(local_48 + 0xc));
    }
    FUN_00d50b20();
    uVar5 = CONCAT71((int7)(uVar5 >> 8),(char)uVar3);
  }
  return uVar5 & 0xffffffff;
}


