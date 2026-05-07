// Function: FUN_00ac67c0
// Address: 00ac67c0
// Size: 2182 bytes
// Class: OsSignatureMac


/* WARNING: Removing unreachable block (ram,0x00ac6960) */
/* WARNING: Removing unreachable block (ram,0x00ac6dfd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00ac67c0(string *param_1,string *param_2)

{
  longlong lVar1;
  string sVar2;
  byte bVar3;
  int iVar4;
  string *psVar5;
  undefined8 *unaff_RDI;
  string *psVar6;
  bool bVar7;
  undefined4 uVar8;
  byte local_128;
  int local_110;
  byte local_108;
  byte local_f0;
  byte local_d8 [24];
  int local_c0;
  string *local_b8;
  byte local_b0;
  longlong local_a8;
  ulonglong local_98;
  ulonglong local_90;
  int local_88;
  uint uStack_84;
  string *local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_b8 = param_1;
  FUN_00aca500();
  if ((local_78 & 1) == 0) {
    if ((byte)local_78 < 2) {
LAB_00ac67f9:
      FUN_00ac62d0();
      goto LAB_00ac682e;
    }
  }
  else {
    operator_delete(param_1);
    if (CONCAT44(uStack_6c,uStack_70) == 0) goto LAB_00ac67f9;
  }
  std::string::string(param_1,param_2);
LAB_00ac682e:
  psVar6 = local_b8;
  FUN_00aca350();
  local_88 = 0;
  uStack_84 = uStack_84 & 0xffffff00;
  if ((DAT_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    DAT_02754568 = 0x8fafd21e25c5e09b;
    param_1 = (string *)&DAT_02520080;
    DAT_02754560 = &DAT_02520080;
    ___cxa_guard_release();
  }
  local_80 = (string *)&DAT_02754560;
  psVar5 = (string *)&local_88;
  FUN_00ac92d0();
  if (local_110 == 1) {
    if (psVar6 == (string *)0x0) {
      ___cxa_allocate_exception();
      local_68 = operator_new((ulong)param_1);
      local_78 = _DAT_023d4ef0;
      uStack_74 = _UNK_023d4ef4;
      uStack_70 = _UNK_023d4ef8;
      uStack_6c = _UNK_023d4efc;
      local_68[2] = 0x6e6f6e61633a3a6d;
      local_68[1] = 0x6574737973656c69;
      *local_68 = 0x663a3a74736f6f62;
      *(undefined4 *)(local_68 + 3) = 0x6c616369;
      *(undefined1 *)((longlong)local_68 + 0x1c) = 0;
      if ((DAT_02754558 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        DAT_02754550 = 0xb2ab117a257edf0d;
        DAT_02754548 = &DAT_0251df98;
        ___cxa_guard_release();
      }
      bVar3 = (**(code **)(DAT_02754548 + 0x30))();
      uVar8 = FUN_00ac4640((ulonglong)bVar3 << 0x20 | 2,local_d8,&DAT_02754548);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar8,FUN_00ac46f0);
    }
    if ((DAT_02754558 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      DAT_02754550 = 0xb2ab117a257edf0d;
      param_1 = (string *)&DAT_0251df98;
      DAT_02754548 = &DAT_0251df98;
      ___cxa_guard_release();
    }
    *(int *)psVar6 = 2;
    sVar2 = (string)(**(code **)(DAT_02754548 + 0x30))();
    psVar6[4] = sVar2;
    *(undefined ***)(psVar6 + 8) = &DAT_02754548;
    std::string::string(param_1,psVar5);
  }
  else {
    if (local_88 == 0) {
      bVar7 = true;
LAB_00ac6941:
      if (bVar7) {
        FUN_00ac9c40();
        if (psVar6 != (string *)0x0) {
          do {
            FUN_00ac9e20();
            param_1 = (string *)(local_58 ^ local_90 | local_60 ^ local_98);
            bVar7 = param_1 == (string *)0x0;
            if ((local_b0 & 1) != 0) {
              operator_delete(param_1);
            }
            if (bVar7) goto LAB_00ac6b50;
            FUN_00acaa70();
            iVar4 = FUN_00ac9910();
            if (iVar4 != 0) {
              FUN_00acac70();
              iVar4 = FUN_00ac9910();
              if (iVar4 == 0) {
                iVar4 = FUN_00ac9910();
                if (iVar4 != 0) {
                  FUN_00ac9e60();
                }
              }
              else {
                FUN_00ac9740();
                psVar5 = psVar6;
                FUN_00ac71d0();
                if (*(int *)psVar6 != 0) {
                  unaff_RDI[2] = 0;
                  unaff_RDI[1] = 0;
                  *unaff_RDI = 0;
                  iVar4 = 1;
                  goto LAB_00ac6b56;
                }
                if (local_c0 == 4) goto LAB_00ac6b80;
              }
            }
            FUN_00acb370();
          } while( true );
        }
        do {
          FUN_00ac9e20();
          param_1 = (string *)(local_58 ^ local_90 | local_60 ^ local_98);
          bVar7 = param_1 == (string *)0x0;
          if ((local_b0 & 1) != 0) {
            operator_delete(param_1);
          }
          if (bVar7) goto LAB_00ac6b50;
          FUN_00acaa70();
          iVar4 = FUN_00ac9910();
          if (iVar4 != 0) {
            FUN_00acac70();
            iVar4 = FUN_00ac9910();
            if (iVar4 == 0) {
              iVar4 = FUN_00ac9910();
              if (iVar4 != 0) {
                FUN_00ac9e60();
              }
            }
            else {
              FUN_00ac9740();
              psVar5 = (string *)0x0;
              FUN_00ac71d0();
              if (local_c0 == 4) goto LAB_00ac6b80;
            }
          }
          FUN_00acb370();
        } while( true );
      }
      if (psVar6 != (string *)0x0) {
        *(int *)psVar6 = 0;
        psVar6[4] = (string)0x0;
        if ((DAT_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          param_1 = (string *)&DAT_02754560;
          DAT_02754568 = 0x8fafd21e25c5e09b;
          DAT_02754560 = &DAT_02520080;
          ___cxa_guard_release();
        }
        *(undefined ***)(psVar6 + 8) = &DAT_02754560;
      }
      std::string::string(param_1,psVar5);
      goto LAB_00ac6dc3;
    }
    if (psVar6 == (string *)0x0) {
      ___cxa_allocate_exception();
      local_68 = operator_new((ulong)param_1);
      local_78 = _DAT_023d4ef0;
      uStack_74 = _UNK_023d4ef4;
      uStack_70 = _UNK_023d4ef8;
      uStack_6c = _UNK_023d4efc;
      local_68[2] = 0x6e6f6e61633a3a6d;
      local_68[1] = 0x6574737973656c69;
      *local_68 = 0x663a3a74736f6f62;
      *(undefined4 *)(local_68 + 3) = 0x6c616369;
      *(undefined1 *)((longlong)local_68 + 0x1c) = 0;
      uVar8 = FUN_00ac4640(CONCAT44(uStack_84,local_88),local_d8,local_80);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar8,FUN_00ac46f0);
    }
    *(string **)(psVar6 + 8) = local_80;
    *(ulonglong *)psVar6 = CONCAT44(uStack_84,local_88);
    param_1 = local_80;
    std::string::string(local_80,psVar5);
  }
LAB_00ac6dc3:
  if ((local_f0 & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_d8[0] & 1) != 0) {
    operator_delete(param_1);
  }
  return unaff_RDI;
LAB_00ac6b50:
  iVar4 = 4;
LAB_00ac6b56:
  bVar7 = false;
  goto LAB_00ac6b59;
LAB_00ac6b80:
  psVar5 = psVar6;
  FUN_00ac7560();
  if ((psVar6 == (string *)0x0) || (*(int *)psVar6 == 0)) {
    FUN_00ac9e60();
    FUN_00aca500();
    lVar1 = local_a8;
    if ((local_b0 & 1) == 0) {
      if (local_b0 < 2) goto LAB_00ac6c01;
LAB_00ac6ccb:
      FUN_00acb370();
      while( true ) {
        FUN_00ac9e20();
        param_1 = (string *)(local_58 ^ local_90 | local_60 ^ local_98);
        bVar7 = param_1 == (string *)0x0;
        if ((local_b0 & 1) != 0) {
          operator_delete(param_1);
        }
        if (bVar7) break;
        FUN_00ac9740();
        FUN_00acb370();
      }
      std::string::operator=(param_1,psVar5);
    }
    else {
      operator_delete(param_1);
      if (lVar1 != 0) goto LAB_00ac6ccb;
LAB_00ac6c01:
      std::string::string(param_1,psVar5);
      FUN_00ac9740();
      FUN_00acb370();
      while( true ) {
        FUN_00ac9e20();
        param_1 = (string *)(local_58 ^ local_90 | local_60 ^ local_98);
        bVar7 = param_1 == (string *)0x0;
        if ((local_b0 & 1) != 0) {
          operator_delete(param_1);
        }
        if (bVar7) break;
        FUN_00ac9740();
        FUN_00acb370();
      }
      std::string::operator=(param_1,psVar5);
      if ((local_128 & 1) != 0) {
        operator_delete(param_1);
      }
    }
    bVar7 = true;
    iVar4 = 4;
  }
  else {
    unaff_RDI[2] = 0;
    unaff_RDI[1] = 0;
    *unaff_RDI = 0;
    iVar4 = 1;
    bVar7 = false;
  }
  if ((local_108 & 1) != 0) {
    operator_delete(param_1);
  }
LAB_00ac6b59:
  if ((local_78 & 1) != 0) {
    operator_delete(param_1);
  }
  psVar6 = local_b8;
  if (iVar4 != 4) goto LAB_00ac6dc3;
  goto LAB_00ac6941;
}


