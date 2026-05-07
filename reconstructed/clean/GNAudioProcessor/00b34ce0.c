// Function: FUN_00b34ce0
// Address: 00b34ce0
// Size: 949 bytes
// Class: GNAudioProcessor

uint64_t FUN_00b34ce0(uint64_t param_1,uint32_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  byte bVar7;
  uint64_t uVar8;
  bool bVar9;
  uint32_t extraout_XMM0_Da;
  float fVar10;
  int64_t local_48;
  char local_40;
  
  iVar5 = (**(code **)(*this_ptr + 0x4b0))();
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      (**(code **)(*this_ptr + 0x4b8))(extraout_XMM0_Da,param_2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          goto LAB_00b34d9e;
        }
      }
      else if (local_48 != 0) {
LAB_00b34d9e:
        uVar1 = *(uint *)(local_48 + 0xc);
        if ((int)uVar1 < 1) {
          uVar8 = 0;
          lVar6 = 0;
          bVar3 = false;
        }
        else {
          uVar8 = 0;
          lVar6 = 0;
          bVar3 = false;
          do {
            lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + uVar8 * 8);
            if (lVar6 == lVar2) {
              lVar2 = lVar6;
              bVar4 = bVar3;
              if ((!bVar3) && (lVar6 != 0)) {
                FUN_00d50b00();
                bVar4 = true;
              }
            }
            else {
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              if ((bVar3) && (lVar6 != 0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar4;
            lVar6 = lVar2;
            iVar5 = FUN_00d92520();
            if (iVar5 == 0) {
              *arg1 = (float)(int)uVar8;
              uVar8 = 1;
              goto LAB_00b34fb2;
            }
            uVar8 = uVar8 + 1;
          } while (uVar1 != uVar8);
          uVar8 = 0;
        }
LAB_00b34fb2:
        FUN_00d50b20();
        goto joined_r0x00b35069;
      }
    }
    uVar8 = 0;
    goto LAB_00b35078;
  }
  (**(code **)(*this_ptr + 0x490))(0,param_2);
  lVar6 = local_48;
  if (local_48 == 0) {
    bVar7 = 1;
    lVar6 = 0;
    bVar3 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar7 = 0;
    bVar3 = true;
  }
  else {
    bVar7 = 0;
    bVar3 = true;
  }
  iVar5 = FUN_00d92520();
  if (iVar5 == 0) {
    fVar10 = 0.0;
LAB_00b3505c:
    *arg1 = fVar10;
    uVar8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
  }
  else {
    (**(code **)(*this_ptr + 0x490))(g_02390124,param_2);
    if (local_48 == lVar6) {
      if ((bool)(bVar7 & local_48 != 0)) {
        bVar4 = true;
        if (local_40 != '\0') goto LAB_00b35016;
        bVar3 = true;
        FUN_00d50b00();
      }
LAB_00b35002:
      bVar4 = bVar3;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar9 = (bool)(bVar3 & lVar6 != 0);
      bVar3 = true;
      lVar6 = local_48;
      bVar4 = true;
      if (bVar9) {
        FUN_00d50b20();
        goto LAB_00b35002;
      }
    }
    else {
      bVar9 = lVar6 != 0;
      lVar6 = local_48;
      bVar4 = true;
      if ((bool)(bVar3 & bVar9)) {
        FUN_00d50b20();
      }
    }
LAB_00b35016:
    bVar3 = bVar4;
    iVar5 = FUN_00d92520();
    if (iVar5 == 0) {
      this_ptr = (int64_t *)0x0;
      fVar10 = g_02390124;
      goto LAB_00b3505c;
    }
    uVar8 = 0;
  }
joined_r0x00b35069:
  if ((bVar3) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
LAB_00b35078:
  return uVar8 & 0xffffffff;
}

