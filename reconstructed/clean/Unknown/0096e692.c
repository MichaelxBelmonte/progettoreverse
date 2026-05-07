// Function: FUN_0096e692
// Address: 0096e692
// Size: 4848 bytes
// Class: Unknown
// String references:
//   "ILokCC"

uint64_t FUN_0096e692(uint param_1,int64_t param_2,uint param_3,byte *param_4,int64_t *param_5,
                      uint *param_6,int64_t param_7,int64_t *param_8,uint *param_9,uint *param_10)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  byte *pbVar7;
  uint64_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint *local_res8;
  int64_t local_res10;
  int *local_res18;
  int *local_res20;
  uint8_t local_c60 [112];
  uint8_t local_bf0 [56];
  uint8_t local_bb8 [112];
  int64_t local_b48;
  int64_t local_b40;
  int local_b38;
  int local_b34;
  int local_b2c;
  uint local_b28;
  uint uStack_b24;
  uint uStack_b20;
  uint uStack_b1c;
  uint local_b18;
  uint local_b14;
  int64_t local_b10;
  uint local_b04;
  byte *local_b00;
  int local_af4;
  uint local_af0;
  int local_aec;
  int64_t local_ae8;
  uint32_t local_adc;
  int local_ad8;
  uint32_t local_ad4;
  int64_t local_ad0;
  int local_ac8;
  uint local_ac4;
  byte local_abe;
  char local_abd;
  int local_abc;
  uint local_ab8;
  uint local_ab4;
  uint8_t local_ab0 [2552];
  byte local_b8 [4];
  uint local_b4;
  uint local_b0;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar8 = 99;
  if ((((((local_res20 != (int *)0x0) && (param_6 != (uint *)0x0)) && (local_res18 != (int *)0x0))
       && (((local_res10 != 0 && (local_res8 != (uint *)0x0)) &&
           ((param_4 != (byte *)0x0 && ((this_ptr != 0 && (param_2 != 0)))))))) &&
      (param_1 < 0x501)) && (local_b00 = param_4, local_af0 = param_3, param_5 != (int64_t *)0x0))
  {
    FUN_0096dfe2();
    FUN_0096dfe2();
    FUN_0096dfbe();
    lVar5 = FUN_00970cad(0x30,param_1,0,&local_b04);
    if (lVar5 == 0) {
      uVar8 = 0x12e;
    }
    else {
      local_ae8 = (uint64_t)local_b04 + lVar5;
      local_b48 = lVar5;
      uVar2 = FUN_0096f98f(&local_ac8,local_ac4);
      uVar8 = (uint64_t)uVar2;
      if ((uVar2 == 0) && (uVar8 = 0x144, local_ac8 == 2)) {
        local_ac8 = 1;
        uVar6 = FUN_0096fa62(1,local_ac4,&local_abc,&local_af4);
        uVar8 = uVar6 & 0xffffffff;
        if ((int)uVar6 == 0) {
          local_adc = (uint32_t)CONCAT71((int7)(uVar6 >> 8),1);
          local_b40 = param_2;
          local_b14 = param_1;
          do {
            if (local_ad0 == 0) {
              uVar2 = FUN_0096fa62(0,local_ac4,&local_abc,&local_af4);
              uVar8 = (uint64_t)uVar2;
              if ((uVar2 != 0) || (uVar8 = 0x14e, local_abc != 0)) break;
              local_aec = local_af4;
              uVar2 = FUN_0096fd7c(local_bb8,local_ab4);
              uVar8 = (uint64_t)uVar2;
              if (uVar2 != 0) break;
              if (local_ac4 < 0x501) {
                local_ad0 = FUN_00970cad(0x30,local_ac4,1,&local_ab8);
                if (local_ad0 != 0) {
                  uVar2 = FUN_0096ff8c(&local_ad8,local_ab4,&local_abc);
                  uVar8 = (uint64_t)uVar2;
                  if (uVar2 != 0) break;
                  if (local_ad8 == -1) {
                    uVar8 = 0x25a;
                    break;
                  }
                  uVar8 = 0x173;
                  if (local_abc != 0) break;
                  if (*local_res8 == 0xffffffff) {
                    uVar2 = FUN_0096dd64(extraout_XMM0_Da,&local_abd);
                    uVar8 = (uint64_t)uVar2;
                    if ((uVar2 != 0) || (uVar8 = 0x142, local_abd != '\0')) break;
                    uVar2 = FUN_0096dd64(extraout_XMM0_Da_00,&local_abd);
                    pbVar7 = local_b00;
                    uVar8 = (uint64_t)uVar2;
                    if ((uVar2 != 0) || (uVar8 = 0x142, local_abd != '\0')) break;
                    *local_res20 = local_ad8;
                    *local_res18 = local_aec;
                    FUN_009740e6(local_aec,0x80);
                    *pbVar7 = 0x80;
                    pbVar7[4] = 0xff;
                    pbVar7[5] = 0xff;
                    pbVar7[6] = 0xff;
                    pbVar7[7] = 0xff;
                    pbVar7[8] = 0xff;
                    pbVar7[9] = 0xff;
                    pbVar7[10] = 0xff;
                    pbVar7[0xb] = 0xff;
                    pbVar7[0x7c] = 0xff;
                    pbVar7[0x7d] = 0xff;
                    pbVar7[0x7e] = 0xff;
                    pbVar7[0x7f] = 0xff;
                    param_6[2] = 0xffffffff;
                    param_6[3] = 0xffffffff;
                    param_6[4] = 0xffffffff;
                    param_6[5] = 0xffffffff;
                    param_6[6] = 0xffffffff;
                    param_6[7] = 0xffffffff;
                    param_6[8] = 0xffffffff;
                    param_6[9] = 0xffffffff;
                    param_6[10] = 0xffffffff;
                    param_6[0xb] = 0xffffffff;
                    param_6[0xc] = 0xffffffff;
                    param_6[0xd] = 0xffffffff;
                    param_6[0xe] = 0xffffffff;
                    param_6[0xf] = 0xffffffff;
                    param_6[0] = 0xffffffff;
                    param_6[1] = 0xffffffff;
                    param_6[0x10] = 0x1010101;
                    param_6[0x11] = 0x1010101;
                    param_6[0x12] = 0x7c7d7e7f;
                    param_6[0x13] = 0x78797a7b;
                  }
                  uVar2 = *(uint *)(local_b00 + 4);
                  uVar8 = 0x166;
                  if ((((((uVar2 & 0x800028) != 0x800028) || (uVar8 = 0x167, (uVar2 & 7) != 7)) ||
                       (uVar8 = 0x179, (uVar2 & 0x10) == 0)) ||
                      (uVar8 = 0x15f, (local_b00[0x7f] & 4) == 0)) ||
                     (((uVar2 >> 0xc & 1) == 0 &&
                      ((uVar8 = 0x17a, *local_res18 != local_aec || (*local_res20 != local_ad8))))))
                  break;
                  if ((local_af0 >> 0x1b & 1) == 0) {
                    uVar2 = FUN_009710c4(local_ab0,1);
                    uVar8 = (uint64_t)uVar2;
                    if (uVar2 != 0) break;
                    uVar2 = FUN_00971e03();
                    uVar8 = (uint64_t)uVar2;
                    if (uVar2 != 0) break;
                    local_adc = 0;
                  }
                  local_ad0 = FUN_0096fe8c(0xc,local_ac4,&local_ab8,&local_ad4);
                  if (local_ad0 == 0) {
                    uVar8 = 0x13b;
                    local_ad0 = 0;
                    break;
                  }
                  local_b10 = local_ad0 + (uint64_t)local_ab8;
                  local_ad0 = FUN_009700c0(&g_023c8b78,local_ad4,1,0);
                  if (local_ad0 == 0) {
                    uVar8 = 0x13c;
                    break;
                  }
                  uVar2 = FUN_00970288(local_b8,local_ab4);
                  uVar8 = (uint64_t)uVar2;
                  if (uVar2 != 0) break;
                  uVar8 = 0x151;
                  if (((((local_b4 & ~*(uint *)(local_b00 + 4)) != 0) ||
                       ((local_b0 & ~*(uint *)(local_b00 + 8)) != 0)) ||
                      ((uVar8 = 0x164, (local_b4 & ~*param_6) != 0 ||
                       ((((local_b0 & ~param_6[8]) != 0 ||
                         (uVar8 = 0x14f, *local_b00 <= local_b8[0])) ||
                        (uVar8 = 0x165, (byte)param_6[0x12] < local_b8[0])))))) ||
                     ((local_b8[0] < (byte)param_6[0x10] ||
                      ((uVar2 = local_b4 & 7, uVar2 < 7 &&
                       (uVar8 = 0x177, (0x68U >> uVar2 & 1) != 0)))))) break;
                  if ((local_b4 & 0x10) == 0) {
                    uVar8 = 0x17d;
                    if (uVar2 == 7) break;
                  }
                  else if ((uVar2 < 5) && (uVar8 = 0x178, (0x16U >> uVar2 & 1) != 0)) break;
                  uVar8 = 0x15f;
                  if (((local_b4 & 0x20) == 0 && (*(uint *)(local_b00 + 4) & 0x800) == 0) ||
                     (uVar8 = 0x160, (local_b4 & 8) == 0)) break;
                  local_ad0 = FUN_009700c0(&g_023c8b86,local_ad4,1,0);
                  if (local_ad0 == 0) {
                    uVar8 = 0x13d;
                    break;
                  }
                  uVar2 = FUN_009704b3(&local_b18,local_ab4);
                  uVar8 = (uint64_t)uVar2;
                  if ((((uVar2 != 0) ||
                       (uVar8 = 0x150, (local_b18 & ~*(uint *)(local_b00 + 0x7c)) != 0)) ||
                      (uVar8 = 0x15d, -1 < (int)local_b18)) ||
                     (uVar8 = 0x15e, (bool)((byte)(local_b18 >> 0x1a) & 1) != ((local_b4 & 7) == 7))
                     ) break;
                  local_ad0 = FUN_009700c0(&g_023c8b82,local_ad4,1,0);
                  if (local_ad0 == 0) {
                    uVar8 = 0x13e;
                    break;
                  }
                  uVar2 = FUN_00970580(&local_abe,local_ab4,&local_abc);
                  uVar8 = (uint64_t)uVar2;
                  if ((uVar2 != 0) || (uVar8 = 0x163, (local_b4 >> 0x17 & 1) != (uint)local_abe))
                  break;
                  if (local_abe == 0) {
                    uVar8 = 0x16f;
                    if ((local_b4 & 0xffffffc7) != 0) break;
                  }
                  else {
                    uVar8 = 0x168;
                    if ((local_b4 & 0x20) == 0) break;
                  }
                  uVar8 = 0x146;
                  if (((local_abc != 0) || (uVar8 = 0x134, 0x500 < local_ac4)) ||
                     (local_b10 = FUN_00970cad(0x30,local_ac4,4,&local_ab8), local_b10 == 0)) break;
                  local_ad0 = FUN_009700c0(&g_023c8b60,local_ad4,0);
                  if (local_ad0 == 0) {
                    uVar8 = 0x135;
                    break;
                  }
                  if ((char)local_b8[0] < '0') {
                    if (local_b8[0] == 1) {
                      pbVar7 = &g_023c8c09;
                      goto LAB_0096f186;
                    }
                    if (local_b8[0] == 0x10) {
                      pbVar7 = &g_023c8c04;
                      goto LAB_0096f186;
                    }
                  }
                  else {
                    if (local_b8[0] == 0x30) {
                      pbVar7 = &g_023c8bf0;
                    }
                    else if (local_b8[0] == 0x70) {
                      pbVar7 = &g_023c8bb0;
                    }
                    else {
                      if (local_b8[0] != 0x50) goto LAB_0096f1b9;
                      pbVar7 = &g_023c8bd0;
                    }
LAB_0096f186:
                    uVar8 = 0x147;
                    if ((local_ab4 != *pbVar7) || (cVar1 = FUN_00974230(local_ab8), cVar1 != '\0'))
                    break;
                  }
LAB_0096f1b9:
                  local_ad0 = FUN_009700c0(&g_023c8b6c,local_ad4,0,&local_ab8);
                  if (local_ad0 == 0) {
                    uVar8 = 0x137;
                    break;
                  }
                  uVar8 = 0x148;
                  if ((local_ab4 != 6) || (cVar1 = FUN_00974230(local_ab8,6), cVar1 != '\0')) break;
                  if (local_abe != 0) {
                    local_ad0 = FUN_009700c0(&g_023c8b68,local_ad4,0,&local_ab8);
                    if (local_ad0 == 0) {
                      uVar8 = 0x136;
                      break;
                    }
                    uVar8 = 0x147;
                    if (local_ab4 != 0x10) break;
                    cVar1 = FUN_00974230(local_ab8,0x10);
                    uVar8 = 0x14c;
                    if (cVar1 != '\0') break;
                  }
                  uVar2 = FUN_009706cc(&local_b38,local_ac4);
                  uVar8 = (uint64_t)uVar2;
                  if (uVar2 != 0) break;
                  if ((local_b4 & 0x20) == 0) {
                    uVar8 = 0x171;
                    if ((((local_b38 != 0) || (local_b34 != -1)) ||
                        (uVar8 = 0x17e, (local_b4 & 0x10) == 0)) ||
                       (uVar8 = 0x17f, local_b8[0] != 1)) break;
                  }
                  else {
                    if ((local_b38 == 0) && (local_b34 == -1)) {
                      uVar8 = 0x17b;
                      break;
                    }
                    uVar8 = 0x180;
                    if (local_b8[0] == 1) break;
                  }
                  local_ad0 = FUN_009700c0(&g_023c8b5c,local_ad4,0,&local_ab8);
                  if (local_ad0 == 0) {
                    uVar8 = 0x139;
                    break;
                  }
                  uVar2 = FUN_00970828(local_ab8,&local_abc);
                  uVar8 = (uint64_t)uVar2;
                  if ((uVar2 != 0) || (uVar8 = 0x15c, local_b2c != local_abc)) break;
                  local_ad0 = FUN_009700c0(&g_023c8b58,local_ad4,0,&local_ab8);
                  if (local_ad0 == 0) {
                    uVar8 = 0x138;
                    break;
                  }
                  uVar2 = FUN_009708a3(&local_abc,&local_ac8);
                  uVar8 = (uint64_t)uVar2;
                  if (((uVar2 != 0) || (uVar8 = 0x15b, local_ac8 != local_b38)) ||
                     (local_abc != local_b34)) break;
                  uVar2 = FUN_0097092d(&local_b28,local_ac4);
                  uVar8 = (uint64_t)uVar2;
                  if (uVar2 != 0) break;
                  uVar8 = 0x14b;
                  if ((uStack_b20 < local_b28) ||
                     ((local_b28 == uStack_b20 && (uStack_b1c <= uStack_b24)))) break;
                  uVar2 = *local_res8;
                  if (uVar2 == 0xffffffff) {
                    if (local_abe == 0) {
                      uVar8 = 0x14a;
                      break;
                    }
                    *param_5 = local_b10;
                  }
                  else {
                    uVar8 = 0x152;
                    if (((local_b28 < uVar2) || (local_res8[2] < local_b28)) ||
                       (((local_b28 == uVar2 && (uStack_b24 < local_res8[1])) ||
                        ((local_b28 == local_res8[2] && (local_res8[3] < uStack_b24)))))) break;
                  }
                  if (0x500 < local_ac4) {
                    local_ad0 = 0;
                    uVar8 = 0x134;
                    break;
                  }
                  local_ad0 = FUN_00970cad(0x30,local_ac4,2,&local_ab8);
                  uVar8 = 0x134;
                  if (local_ad0 == 0) break;
                  local_ac8 = local_ab4 + local_ab8;
                  local_abc = FUN_0096e139(extraout_XMM0_Da_01,&local_ab8);
                  local_abc = local_abc + local_ab8;
                  uVar8 = 0x153;
                  if ((local_ac8 != local_abc) ||
                     (cVar1 = FUN_00974230(param_5,local_abc), cVar1 != '\0')) break;
                  local_ad0 = FUN_00970cad(0x30,local_b14,1,&local_ab8);
                  if (local_ad0 == 0) {
                    uVar8 = 0x13f;
                    break;
                  }
                  uVar3 = FUN_0096ff8c(&local_ac8,local_ab4,&local_abc);
                  uVar2 = local_b14;
                  uVar8 = (uint64_t)uVar3;
                  if (((uVar3 != 0) || (uVar8 = 0x14d, local_ac8 != local_ad8)) ||
                     (uVar8 = 0x173, local_abc != 0)) break;
                  if (-1 < (int)local_af0) {
                    uVar3 = FUN_009710c4(local_ab0,1);
                    uVar8 = (uint64_t)uVar3;
                    if (uVar3 != 0) break;
                    uVar3 = FUN_009735b0(extraout_XMM0_Da_02,0x40);
                    uVar8 = (uint64_t)uVar3;
                    if (uVar3 != 0) break;
                    uVar3 = FUN_0097370c(extraout_XMM0_Da_03,local_ac4 + local_b04);
                    uVar8 = (uint64_t)uVar3;
                    if (uVar3 != 0) break;
                    uVar3 = FUN_009738c8(0,local_bf0,0);
                    uVar8 = (uint64_t)uVar3;
                    if (uVar3 != 0) break;
                  }
                  local_ad0 = FUN_00970cad(3,uVar2,2,&local_ab8);
                  if (local_ad0 == 0) {
                    uVar8 = 0x140;
                    break;
                  }
                  uVar2 = FUN_00970acb(local_c60,local_ab4);
                  uVar8 = (uint64_t)uVar2;
                  if (uVar2 != 0) break;
                  if (-1 < (int)local_af0) {
                    iVar4 = FUN_00971af6(local_c60,local_bf0);
                    uVar8 = 0x172;
                    if (iVar4 != 0) break;
                  }
                  uVar2 = FUN_0096df40();
                  uVar8 = (uint64_t)uVar2;
                  if (uVar2 == 0) {
                    uVar2 = FUN_0096df40();
                    pbVar7 = local_b00;
                    uVar8 = (uint64_t)uVar2;
                    if (uVar2 == 0) {
                      *local_res18 = local_aec;
                      *param_5 = local_b10;
                      *local_res8 = local_b28;
                      local_res8[1] = uStack_b24;
                      local_res8[2] = uStack_b20;
                      local_res8[3] = uStack_b1c;
                      FUN_0097425b(local_b10,0x80);
                      *(uint *)(pbVar7 + 0x7c) = local_b18;
                      uVar2 = FUN_00970bee();
                      uVar8 = (uint64_t)uVar2;
                      if (uVar2 == 0) {
                        *local_res20 = local_ad8;
                        if (param_7 != 0) {
                          FUN_0097425b(extraout_XMM0_Da_04,0x10);
                        }
                        if (param_8 != (int64_t *)0x0) {
                          *param_8 = local_b48;
                        }
                        if (param_9 != (uint *)0x0) {
                          *param_9 = local_b04;
                        }
                        uVar8 = 0;
                        if (param_10 != (uint *)0x0) {
                          *param_10 = local_ac4;
                        }
                      }
                    }
                  }
                  break;
                }
              }
              else {
                local_ad0 = 0;
              }
              uVar8 = 0x131;
              break;
            }
            if (local_abc != 0) {
              uVar8 = 0x175;
              break;
            }
            uVar2 = FUN_0096fd7c(local_bb8,local_ab4);
            if (uVar2 != 0) {
LAB_0096e98f:
              uVar8 = (uint64_t)uVar2;
              break;
            }
            if ((local_af0 >> 0x1b & 1) == 0) {
              uVar2 = FUN_009710c4(local_ab0,1);
              if ((uVar2 != 0) || (uVar2 = FUN_00971e03(), uVar2 != 0)) goto LAB_0096e98f;
              local_adc = 0;
            }
            local_ac8 = local_ac8 + 1;
            uVar2 = FUN_0096fa62(local_ac8,local_ac4,&local_abc,&local_af4);
            uVar8 = (uint64_t)uVar2;
          } while (uVar2 == 0);
        }
      }
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar8;
  }
                      ___stack_chk_fail();
}

