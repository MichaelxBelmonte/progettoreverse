// Function: FUN_01293980
// Address: 01293980
// Size: 1058 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01293b5d) */
/* WARNING: Removing unreachable block (ram,0x01293b66) */
/* WARNING: Removing unreachable block (ram,0x01293af3) */
/* WARNING: Removing unreachable block (ram,0x01293afc) */

void FUN_01293980(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_90;
  char local_88;
  longlong local_60;
  char local_58;
  
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_01266770();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    if (*(longlong *)(local_60 + 0xd8) == 0) goto LAB_01293a29;
LAB_01293a5d:
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef490();
    lVar3 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  else {
    param_1 = local_60;
    if (*(longlong *)
         (*(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0xd8) !=
        0) goto LAB_01293a5d;
LAB_01293a29:
    lVar3 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    FUN_0039e8b0();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    param_1 = 0;
    uVar7 = FUN_012912a0(0,0,0);
    *param_2 = uVar7;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar6 = 0;
      if (lVar3 == 0) {
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
          pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          }
          if (*(longlong *)(lVar5 + 0xd8) != 0) {
            pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef490();
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if (local_90 != 0) goto LAB_01293d73;
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
      }
      else {
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
          pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          }
          if (*(longlong *)(lVar5 + 0xd8) == 0) goto LAB_01293d73;
          pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef490();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (local_90 != lVar3) goto LAB_01293d73;
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
      }
    }
    FUN_001159b0();
  }
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01293c81:
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_01293d73:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  FUN_001159b0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  goto LAB_01293c81;
}


