// Function: FUN_01656bf0
// Address: 01656bf0
// Size: 1454 bytes
// Class: MULSSGenerator


undefined8 ***** FUN_01656bf0(pthread_key_t param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *****pppppuVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *****unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 local_8c;
  undefined8 ****local_78;
  char local_70;
  double local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_016557b0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  local_60 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffffffffffff00;
  }
  if ((local_70 != '\0') && ((undefined8 *****)local_78 != (undefined8 *****)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    local_68 = DAT_0238fee8 / *(double *)(unaff_RDI + 0x68);
  }
  else {
    local_8c = 0xffffffff;
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_60;
    }
    local_68 = (double)FUN_016c98e0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_60;
    }
    local_58 = param_2;
    uVar6 = FUN_00e7b820();
    uVar6 = FUN_016c98e0(uVar6,&local_8c);
    local_68 = (double)FUN_016553c0(local_68);
    uVar6 = FUN_016553c0(uVar6);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar5 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffffffffffff00;
    }
    if ((local_70 != '\0') && ((undefined8 *****)local_78 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    local_58 = CONCAT44(local_58._4_4_,0xffffffff);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_016c25f0(local_68);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_016c25f0(uVar6);
    dVar8 = (double)FUN_00e7c860();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_68 = (local_68 - dVar7) / dVar8;
  }
  local_58 = FUN_00e7bcc0();
  local_50 = FUN_00e7bcc0();
  local_48 = FUN_00e7bcc0();
  local_40 = FUN_00e7bcc0();
  while (dVar7 = (double)FUN_00e7c860(), local_68 < dVar7) {
    local_78 = (undefined8 ****)CONCAT44(local_78._4_4_,2);
    FUN_00e7c3c0();
    local_68 = local_68 + local_68;
  }
  while (dVar7 = (double)FUN_00e7c860(), dVar7 < local_68) {
    local_78 = (undefined8 ****)CONCAT44(local_78._4_4_,2);
    FUN_00e7c2a0();
    local_68 = local_68 * DAT_023942d0;
  }
  dVar7 = (double)FUN_00e7c860();
  dVar8 = (double)FUN_00e7c860();
  dVar9 = (double)FUN_00e7c860();
  dVar10 = (double)FUN_00e7c860();
  dVar11 = (double)FUN_00e7c860();
  dVar12 = (double)FUN_00e7c860();
  if (((local_68 < SQRT(dVar7 * dVar8)) || (local_68 < SQRT(dVar9 * dVar10))) ||
     (local_68 < SQRT(dVar11 * dVar12))) {
    local_78 = unaff_RSI;
    FUN_00e7bac0();
    bVar2 = true;
    bVar1 = true;
    pppppuVar3 = (undefined8 *****)local_78;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    pppppuVar3 = &local_78;
  }
  if (local_60 != 0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (bVar1) {
    unaff_RSI = pppppuVar3;
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return unaff_RSI;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


