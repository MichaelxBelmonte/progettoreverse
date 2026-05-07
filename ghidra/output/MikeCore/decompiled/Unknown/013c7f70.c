// Function: FUN_013c7f70
// Address: 013c7f70
// Size: 1561 bytes
// Class: Unknown


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013c7f70(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong *unaff_RSI;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  uint uVar15;
  longlong local_78;
  char local_70;
  longlong local_40;
  longlong local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025f0d98;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  (*DAT_025f0db0)();
  lVar7 = FUN_00e83010();
  ___bzero();
  FUN_00e83da0();
  lVar11 = *unaff_RSI;
  if (*(int *)(lVar11 + 0xc) < 1) {
    bVar14 = false;
    local_38 = 0;
    bVar2 = false;
    local_40 = 0;
    bVar4 = false;
    lVar13 = 0;
  }
  else {
    lVar10 = 0;
    lVar13 = 0;
    bVar4 = false;
    local_40 = 0;
    bVar2 = false;
    local_38 = 0;
    lVar12 = 0;
    bVar14 = false;
    do {
      pVar9 = (pthread_key_t)lVar12;
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar10 * 8);
      if (local_40 == lVar11) {
        if ((!bVar2) && (local_40 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_40 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_40 = lVar11;
        }
        else {
          bVar2 = true;
          local_40 = lVar11;
        }
      }
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014c2a40();
      if (local_78 == local_38) {
        bVar3 = bVar14;
        if ((!bVar14) && (local_78 != 0)) {
          bVar3 = true;
          if (local_70 != '\0') goto LAB_013c8390;
          FUN_00d50b00();
LAB_013c8213:
          bVar3 = true;
        }
        if (local_70 == '\0') {
LAB_013c8390:
          iVar1 = *(int *)(local_38 + 0xc);
          bVar14 = bVar3;
        }
        else {
          if (local_78 != 0) {
            FUN_00d50b20();
            goto LAB_013c8233;
          }
          iVar1 = *(int *)(local_38 + 0xc);
          bVar14 = bVar3;
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if (bVar14) {
            bVar14 = local_38 != 0;
            local_38 = local_78;
            if (bVar14) {
              FUN_00d50b20();
              local_38 = local_78;
              goto LAB_013c8213;
            }
          }
          else {
            local_38 = local_78;
          }
          goto LAB_013c8390;
        }
        bVar3 = true;
        if ((bVar14) && (local_38 != 0)) {
          FUN_00d50b20();
          local_38 = local_78;
LAB_013c8233:
          iVar1 = *(int *)(local_38 + 0xc);
          bVar14 = bVar3;
        }
        else {
          iVar1 = *(int *)(local_78 + 0xc);
          local_38 = local_78;
          bVar14 = bVar3;
        }
      }
      if (0 < iVar1) {
        lVar12 = 0;
        lVar11 = lVar13;
        do {
          lVar13 = *(longlong *)(*(longlong *)(local_38 + 0x10) + lVar12 * 8);
          if (lVar11 == lVar13) {
            lVar13 = lVar11;
            bVar3 = bVar4;
            if ((!bVar4) && (lVar11 != 0)) {
              FUN_00d50b00();
              bVar3 = true;
            }
          }
          else {
            if (lVar13 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar4) && (lVar11 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar4 = bVar3;
          uVar5 = FUN_01483610();
          uVar15 = -(uint)(*(float *)(lVar13 + 0x28) <= DAT_02394270);
          FUN_015c31c0(~uVar15 & (uint)SQRT(*(float *)(lVar13 + 0x28)) & _DAT_02390140 |
                       uVar15 & DAT_023b3e04,uVar5,600);
          lVar12 = lVar12 + 1;
          lVar11 = lVar13;
        } while (lVar12 < *(int *)(local_38 + 0xc));
      }
      lVar10 = lVar10 + 1;
      lVar11 = *unaff_RSI;
      lVar12 = (longlong)*(int *)(lVar11 + 0xc);
    } while (lVar10 < lVar12);
  }
  FUN_015b3230();
  uVar5 = FUN_014b2ea0();
  *param_2 = uVar5;
  uVar5 = FUN_014b2ea0();
  *param_1 = uVar5;
  lVar11 = 4;
  do {
    if ((((DAT_02391090 < *(float *)(lVar7 + -0x10 + lVar11 * 4)) ||
         (DAT_02391090 < *(float *)(lVar7 + -0xc + lVar11 * 4))) ||
        (DAT_02391090 < *(float *)(lVar7 + -8 + lVar11 * 4))) ||
       ((DAT_02391090 < *(float *)(lVar7 + -4 + lVar11 * 4) ||
        (DAT_02391090 < *(float *)(lVar7 + lVar11 * 4))))) {
      uVar5 = FUN_014b2ea0();
      *param_2 = uVar5;
      break;
    }
    lVar11 = lVar11 + 5;
  } while (lVar11 != 0x7e8);
  lVar11 = 0x7df;
  while (((*(float *)(lVar7 + 0x10 + lVar11 * 4) <= DAT_02391090 &&
          (*(float *)(lVar7 + 0xc + lVar11 * 4) <= DAT_02391090)) &&
         ((*(float *)(lVar7 + 8 + lVar11 * 4) <= DAT_02391090 &&
          ((*(float *)(lVar7 + 4 + lVar11 * 4) <= DAT_02391090 &&
           (*(float *)(lVar7 + lVar11 * 4) <= DAT_02391090))))))) {
    lVar11 = lVar11 + -5;
    if (lVar11 == -5) {
LAB_013c8547:
      FUN_00e83070();
      FUN_00e83070();
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((bVar14) && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar4) && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      return;
    }
  }
  uVar5 = FUN_014b2ea0();
  *param_1 = uVar5;
  goto LAB_013c8547;
}


