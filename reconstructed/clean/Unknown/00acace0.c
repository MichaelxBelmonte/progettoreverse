// Function: FUN_00acace0
// Address: 00acace0
// Size: 1371 bytes
// Class: Unknown

void FUN_00acace0(string *param_1,string *param_2)

{
  bool bVar1;
  string *psVar2;
  byte bVar3;
  int iVar4;
  string *psVar5;
  string *psVar6;
  string *psVar7;
  string *arg1;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  byte local_130;
  string *local_118;
  string *local_110;
  byte local_100;
  byte local_d8;
  byte local_b0;
  string local_af [7];
  string *local_a8;
  string *local_a0;
  string *local_98;
  string *local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_78;
  byte local_60;
  string local_5f [7];
  string *local_58;
  string *local_50;
  uint64_t local_48;
  string *psStack_40;
  uint64_t local_38;
  
  if (((byte)*arg1 & 1) == 0) {
    if ((byte)*arg1 >> 1 == 0) {
LAB_00acad4f:
      std::string::string(param_1,param_2);
      return;
    }
  }
  else if (*(int64_t *)(arg1 + 8) == 0) goto LAB_00acad4f;
  local_48 = 0;
  psStack_40 = (string *)0x0;
  local_38 = 0;
  FUN_00ac9c40();
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (((byte)*arg1 & 1) == 0) {
    psVar5 = (string *)(uint64_t)((byte)*arg1 >> 1);
  }
  else {
    psVar5 = *(string **)(arg1 + 8);
  }
  std::string::string(param_1,param_2);
  psVar6 = arg1;
  FUN_00acb6a0();
  std::string::string(psVar6,param_2);
  local_90 = local_110;
  local_98 = local_118;
  psVar6 = local_110;
  while ((local_98 != arg1 || (local_90 != psVar5))) {
    if ((local_b0 & 1) == 0) {
      psVar6 = (string *)(uint64_t)(local_b0 >> 1);
      if (psVar6 == (string *)((int64_t)&MACH_HEADER.magic + 1)) goto LAB_00acae5c;
LAB_00acaea0:
      psVar7 = psStack_40;
      if ((local_48 & 1) == 0) {
        psVar7 = (string *)(local_48 >> 1 & 0x7f);
      }
      if ((psVar7 != (string *)0x0) && (psVar6 == (string *)((int64_t)&MACH_HEADER.magic + 2))) {
        psVar6 = local_af;
        if ((local_b0 & 1) != 0) {
          psVar6 = local_a0;
        }
        if ((*psVar6 == (string)0x2e) && (psVar6[1] == (string)0x2e)) {
          FUN_00aca7e0();
          std::string::string(psVar6,psVar7);
          if ((local_100 & 1) != 0) {
            operator_delete(psVar6);
          }
          bVar3 = local_60 & 1;
          if (bVar3 == 0) {
            bVar1 = false;
            psVar6 = (string *)0x0;
            psVar7 = (string *)(uint64_t)(local_60 >> 1);
            if ((string *)(uint64_t)(local_60 >> 1) != (string *)0x0) goto LAB_00acaf4d;
          }
          else {
            bVar1 = false;
            psVar7 = local_58;
            if (local_58 == (string *)0x0) {
              psVar6 = (string *)0x0;
            }
            else {
LAB_00acaf4d:
              psVar6 = psVar7;
              bVar1 = false;
              if (psVar6 == (string *)((int64_t)&MACH_HEADER.magic + 2)) {
                psVar6 = local_5f;
                if (bVar3 != 0) {
                  psVar6 = local_50;
                }
                if ((*psVar6 == (string)0x2e) || (psVar6[1] == (string)0x2e)) goto LAB_00acb082;
              }
              else if (psVar6 == (string *)((int64_t)&MACH_HEADER.magic + 1)) {
                psVar7 = local_5f;
                if (bVar3 != 0) {
                  psVar7 = local_50;
                }
                psVar6 = (string *)(uint64_t)((byte)*psVar7 & 0xfe);
                if (((byte)*psVar7 & 0xfe) == 0x2e) {
                  psVar6 = (string *)(segment_command_00000020.segname + 6);
                  goto LAB_00acb082;
                }
              }
              FUN_00ac9e90();
              psVar7 = (string *)0xffffffffffffffff;
              std::string::erase((ulong)psVar6,0xffffffff);
              std::string::string(psVar6,psVar7);
              psVar2 = local_90;
              psVar7 = local_98;
              psVar6 = local_90;
              if ((local_48 & 1) == 0) {
                if ((byte)local_48 >> 1 == 0) goto LAB_00acaff0;
              }
              else if (psStack_40 == (string *)0x0) {
LAB_00acaff0:
                FUN_00acb370();
                psVar6 = psVar7;
                if ((((psVar7 != arg1) || (psVar2 != psVar5)) && (psVar7 == arg1)) &&
                   (psVar2 == psVar5)) {
                  if ((g_028a0bb8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                    g_028a0ba0 = 0x2e02;
                    g_028a0ba2 = 0;
                    ___cxa_atexit(extraout_XMM0_Da,0);
                    ___cxa_guard_release();
                  }
                  iVar4 = FUN_00ac9910();
                  psVar6 = psVar7;
                  if (iVar4 == 0) {
                    if ((g_028a0bb8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                      g_028a0ba0 = 0x2e02;
                      g_028a0ba2 = 0;
                      ___cxa_atexit(extraout_XMM0_Da_00,0);
                      ___cxa_guard_release();
                    }
                    FUN_00ac9740();
                    psVar6 = psVar7;
                  }
                }
              }
              if ((local_100 & 1) != 0) {
                operator_delete(psVar6);
              }
              bVar1 = true;
            }
          }
LAB_00acb082:
          if ((local_60 & 1) != 0) {
            operator_delete(psVar6);
          }
          if (bVar1) goto LAB_00acadfb;
        }
      }
      FUN_00ac9740();
    }
    else {
      psVar6 = local_a8;
      if (local_a8 != (string *)((int64_t)&MACH_HEADER.magic + 1)) goto LAB_00acaea0;
LAB_00acae5c:
      psVar7 = local_af;
      if ((local_b0 & 1) != 0) {
        psVar7 = local_a0;
      }
      if (((*psVar7 != (string)0x2e) || ((local_98 == local_118 && (local_90 == local_110)))) ||
         ((local_98 == arg1 && (local_90 == psVar5)))) goto LAB_00acaea0;
    }
LAB_00acadfb:
    FUN_00acb370();
  }
  psVar5 = local_90;
  if ((local_b0 & 1) != 0) {
    operator_delete(psVar6);
    psVar5 = local_90;
  }
  if ((local_48 & 1) == 0) {
    if ((byte)local_48 >> 1 != 0) goto LAB_00acb187;
  }
  else if (psStack_40 != (string *)0x0) goto LAB_00acb187;
  if ((g_028a0bb8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_028a0ba0 = 0x2e02;
    g_028a0ba2 = 0;
    psVar5 = (string *)0x0;
    ___cxa_atexit();
    ___cxa_guard_release();
  }
  FUN_00ac9740();
LAB_00acb187:
  std::string::string(psVar6,psVar5);
  if ((local_d8 & 1) != 0) {
    operator_delete(psVar6);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(psVar6);
  }
  if ((local_130 & 1) != 0) {
    operator_delete(psVar6);
  }
  if ((local_48 & 1) != 0) {
    operator_delete(psVar6);
  }
  return;
}

