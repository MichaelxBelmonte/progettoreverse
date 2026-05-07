// Function: FUN_01775c40
// Address: 01775c40
// Size: 995 bytes
// Class: GNInt


void FUN_01775c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  int iVar8;
  char *pcVar9;
  longlong unaff_RDI;
  float fVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  longlong local_60;
  char local_58 [8];
  undefined8 *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  puVar1 = *(undefined8 **)(unaff_RDI + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  if (*(char *)(unaff_RDI + 0x38) != '\0') {
    fVar10 = (float)FUN_017708f0();
    FUN_00e7d780(fVar10 / DAT_023908e0);
    FUN_00d23340();
    param_1 = (undefined8 *)CONCAT71((int7)((ulonglong)param_1 >> 8),local_58[0]);
    pcVar9 = local_38;
    if (local_58[0] != '\0') {
      pcVar9 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar9 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779f40();
    if ((local_38[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (puVar1 == (undefined8 *)0x0) {
    if (*(char *)(unaff_RDI + 0x38) == '\0') {
      return;
    }
  }
  else {
    local_58[0] = '\0';
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = puVar1;
    while( true ) {
      lVar6 = (longlong)(int)local_48;
      iVar8 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar8) break;
      uVar2 = *(undefined8 *)(local_50[2] + 8 + lVar6 * 8);
      uVar11 = FUN_01775a80();
      FUN_01772540(uVar2,uVar11);
      if (local_48._4_4_ != 0) {
        if (local_48 < 0) {
          iVar8 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar8 = 0;
        }
        local_48 = CONCAT44(iVar8,(int)local_48);
      }
    }
    param_1 = local_50;
    FUN_01777940();
    if (*(char *)(unaff_RDI + 0x38) == '\0') goto LAB_01776036;
  }
  if (2 < *(int *)((longlong)puVar1 + 0xc)) {
    lVar6 = 1;
    do {
      pVar7 = (pthread_key_t)param_1;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar8 = FUN_01779f30();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01779f30();
      param_1 = &DAT_02802558;
      if (iVar8 == iVar4) {
        pvVar5 = _pthread_getspecific(0x2802558);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_01779f30();
        if (iVar8 + 1 < iVar4) {
          lVar3 = *(longlong *)(puVar1[2] + lVar6 * 8);
          uVar11 = extraout_XMM0_Da;
          if (lVar3 != 0) {
            uVar11 = FUN_00d50b00();
          }
          FUN_01772540(uVar11,iVar8 + 1,param_3,param_4,lVar3,1);
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        pvVar5 = _pthread_getspecific(0x2802558);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_01779f30();
        if (iVar8 == iVar4) {
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar4 = FUN_01779f30();
          if (iVar4 < iVar8 + -1) {
            lVar3 = *(longlong *)(puVar1[2] + lVar6 * 8);
            uVar11 = extraout_XMM0_Da_00;
            if (lVar3 != 0) {
              uVar11 = FUN_00d50b00();
            }
            FUN_01772540(uVar11,iVar8 + -1);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (longlong)*(int *)((longlong)puVar1 + 0xc) + -1);
  }
LAB_01776036:
  FUN_00d50b20();
  return;
}


