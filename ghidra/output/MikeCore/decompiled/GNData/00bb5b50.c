// Function: FUN_00bb5b50
// Address: 00bb5b50
// Size: 2464 bytes
// Class: GNData
// String references:
//   "adtl"
//   "labl"
//   "note"
//   "ltxt"
//   "LIST"


/* WARNING: Removing unreachable block (ram,0x00bb5c3c) */
/* WARNING: Removing unreachable block (ram,0x00bb5c48) */

undefined4 FUN_00bb5b50(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *unaff_RSI;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  undefined8 *local_108;
  undefined1 local_100;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_64;
  longlong *local_60;
  longlong local_58;
  char local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*unaff_RSI == 0) {
    uVar10 = 0;
  }
  else {
    local_40 = 0;
    local_48 = 0;
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    local_88 = puVar4;
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar5 = (longlong)&DAT_0256d868;
    plVar5[2] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
    (*DAT_0256d880)();
    local_60 = plVar5;
    FUN_00cccf90();
    FUN_00ccce90();
    FUN_00ccce80();
    (**(code **)(*local_60 + 0x388))(4,"adtl");
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = *unaff_RSI;
    plVar5 = local_60;
    if (0 < *(int *)(lVar8 + 0xc)) {
      lVar9 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar9 * 8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_02765288;
        local_70 = lVar8;
        if (DAT_02765288 != 0) {
          FUN_00d50b00();
        }
        local_58 = lVar2;
        local_50 = '\0';
        cVar3 = FUN_00ca18c0();
        uVar10 = extraout_XMM0_Da;
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b20();
        }
        lVar2 = DAT_02765290;
        lVar8 = DAT_02765278;
        if (cVar3 == '\0') {
          if (DAT_02765278 != 0) {
            FUN_00d50b00();
          }
          local_58 = lVar8;
          local_50 = '\0';
          cVar3 = FUN_00ca18c0();
          uVar10 = extraout_XMM0_Da_01;
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if (lVar8 != 0) {
            uVar10 = FUN_00d50b20();
          }
          lVar2 = DAT_02765280;
          lVar8 = DAT_02765278;
          if (cVar3 != '\0') {
            if (DAT_02765278 != 0) {
              uVar10 = FUN_00d50b00();
            }
            local_c8 = lVar8;
            local_c0 = '\x01';
            uVar6 = FUN_000175c0(uVar10,&local_c8);
            lVar8 = local_58;
            plVar5 = local_60;
            uVar10 = extraout_XMM0_Da_02;
            if (local_58 == 0) {
              lVar8 = 0;
              uVar6 = 0;
              local_80 = 0;
            }
            else if (local_50 == '\0') {
              uVar6 = FUN_00d50b00();
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
              uVar10 = extraout_XMM0_Da_08;
              local_80 = uVar6;
              if ((local_50 != '\0') && (local_58 != 0)) {
                uVar6 = FUN_00d50b20();
                uVar10 = extraout_XMM0_Da_09;
              }
            }
            else {
              local_50 = '\0';
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
              local_80 = uVar6;
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              uVar6 = FUN_00d50b20();
              uVar10 = extraout_XMM0_Da_10;
            }
            iVar7 = 2;
joined_r0x00bb5fdc:
            if (lVar8 != 0) goto LAB_00bb5fe2;
LAB_00bb6350:
            local_64 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            lVar8 = 0;
            local_78 = 0;
            if (iVar7 != 1) goto LAB_00bb6076;
LAB_00bb6368:
            uVar10 = (**(code **)(*plVar5 + 0x388))(4,"note");
            if ((local_140 != '\0') && (local_148 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            uVar10 = FUN_00ccdf50(uVar10,*(int *)(lVar8 + 0x18) + 4);
            if ((local_130 != '\0') && (local_138 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            goto LAB_00bb63e0;
          }
          if (DAT_02765280 != 0) {
            FUN_00d50b00();
          }
          local_58 = lVar2;
          local_50 = '\0';
          cVar3 = FUN_00ca18c0();
          uVar10 = extraout_XMM0_Da_03;
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if (lVar2 != 0) {
            uVar10 = FUN_00d50b20();
          }
          lVar8 = DAT_02765280;
          plVar5 = local_60;
          if (cVar3 != '\0') {
            if (DAT_02765280 != 0) {
              uVar10 = FUN_00d50b00();
            }
            local_b8 = lVar8;
            local_b0 = '\x01';
            uVar6 = FUN_000175c0(uVar10,&local_b8);
            lVar8 = local_58;
            plVar5 = local_60;
            uVar10 = extraout_XMM0_Da_04;
            if (local_58 == 0) {
              lVar8 = 0;
              uVar6 = 0;
              local_80 = 0;
            }
            else if (local_50 == '\0') {
              uVar6 = FUN_00d50b00();
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
              uVar10 = extraout_XMM0_Da_14;
              local_80 = uVar6;
              if ((local_50 != '\0') && (local_58 != 0)) {
                uVar6 = FUN_00d50b20();
                uVar10 = extraout_XMM0_Da_15;
              }
            }
            else {
              local_50 = '\0';
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
              local_80 = uVar6;
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              uVar6 = FUN_00d50b20();
              uVar10 = extraout_XMM0_Da_16;
            }
            iVar7 = 1;
            goto joined_r0x00bb5fdc;
          }
        }
        else {
          if (DAT_02765290 != 0) {
            uVar10 = FUN_00d50b00();
          }
          local_d8 = lVar2;
          local_d0 = '\x01';
          uVar6 = FUN_000175c0(uVar10,&local_d8);
          lVar8 = local_58;
          plVar5 = local_60;
          uVar10 = extraout_XMM0_Da_00;
          if (local_58 == 0) {
            lVar8 = 0;
            uVar6 = 0;
            local_80 = 0;
          }
          else if (local_50 == '\0') {
            uVar6 = FUN_00d50b00();
            uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            uVar10 = extraout_XMM0_Da_05;
            local_80 = uVar6;
            if ((local_50 != '\0') && (local_58 != 0)) {
              uVar6 = FUN_00d50b20();
              uVar10 = extraout_XMM0_Da_06;
            }
          }
          else {
            local_50 = '\0';
            uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            local_80 = uVar6;
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            uVar6 = FUN_00d50b20();
            uVar10 = extraout_XMM0_Da_07;
          }
          iVar7 = 3;
          if (lVar8 == 0) goto LAB_00bb6350;
LAB_00bb5fe2:
          uVar6 = FUN_00d8cf90(uVar10,4);
          lVar8 = local_58;
          uVar10 = extraout_XMM0_Da_11;
          if (local_58 == 0) {
            local_78 = 0;
            lVar8 = 0;
          }
          else if (((local_50 == '\0') &&
                   (uVar6 = FUN_00d50b00(), uVar10 = extraout_XMM0_Da_12, local_50 != '\0')) &&
                  (local_58 != 0)) {
            local_78 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            uVar10 = FUN_00d50b20();
          }
          else {
            local_78 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          }
          iVar1 = *(int *)(lVar8 + 0x18);
          if (((longlong)iVar1 & 1U) != 0) {
            uVar10 = FUN_00c8e340(uVar10,1);
            *(undefined1 *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar1) = 0;
          }
          local_64 = 0;
          plVar5 = local_60;
          if (iVar7 == 1) goto LAB_00bb6368;
LAB_00bb6076:
          if (iVar7 == 2) {
            uVar10 = (**(code **)(*plVar5 + 0x388))(4,"labl");
            if ((local_160 != '\0') && (local_168 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            uVar10 = FUN_00ccdf50(uVar10,*(int *)(lVar8 + 0x18) + 4);
            if ((local_150 != '\0') && (local_158 != 0)) {
              uVar10 = FUN_00d50b20();
            }
LAB_00bb63e0:
            local_90 = '\0';
            local_98 = lVar8;
            FUN_00ccdbb0(uVar10,&local_98);
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((char)local_78 != '\0') {
              FUN_00d50b20();
            }
          }
          else {
            if (iVar7 == 3) {
              uVar10 = (**(code **)(*plVar5 + 0x388))(4,"ltxt");
              if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              uVar10 = FUN_00ccdf50(uVar10,*(int *)(lVar8 + 0x18) + 0x14);
              if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              lVar2 = DAT_02765288;
              if (DAT_02765288 != 0) {
                uVar10 = FUN_00d50b00();
              }
              local_a8 = lVar2;
              local_a0 = '\x01';
              uVar10 = FUN_000175c0(uVar10,&local_a8);
              lVar2 = local_58;
              plVar5 = local_60;
              if (local_50 == '\0') {
                if (((local_58 != 0) && (uVar10 = FUN_00d50b00(), local_50 != '\0')) &&
                   (local_58 != 0)) {
                  uVar10 = FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              if (lVar2 == 0) {
                FUN_00ccdf50(uVar10,0);
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                uVar10 = FUN_00d8d560();
                FUN_00ccdf50(extraout_XMM0_Da_13,uVar10);
                if ((local_190 != '\0') && (local_198 != 0)) {
                  FUN_00d50b20();
                }
              }
              uVar10 = (**(code **)(*plVar5 + 0x388))(0xc,&local_48);
              if ((local_170 != '\0') && (local_178 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              if (lVar2 != 0) {
                uVar10 = FUN_00d50b20();
              }
              goto LAB_00bb63e0;
            }
            if (lVar8 != 0) goto LAB_00bb63e0;
          }
          if ((char)local_80 != '\0' && (char)local_64 == '\0') {
            FUN_00d50b20();
          }
        }
        if (local_70 != 0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        lVar8 = *unaff_RSI;
      } while (lVar9 < *(int *)(lVar8 + 0xc));
    }
    puVar4 = local_88;
    uVar10 = (**(code **)(*plVar5 + 0x368))();
    if ((local_110 != '\0') && (local_118 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    local_108 = puVar4;
    local_100 = 0;
    uVar10 = FUN_00bb0460(uVar10,&local_108);
    FUN_00d50b20();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}


