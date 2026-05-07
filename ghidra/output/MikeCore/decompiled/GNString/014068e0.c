// Function: FUN_014068e0
// Address: 014068e0
// Size: 2770 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01406a66) */
/* WARNING: Removing unreachable block (ram,0x01406a72) */
/* WARNING: Removing unreachable block (ram,0x01406db7) */
/* WARNING: Removing unreachable block (ram,0x01406dc3) */
/* WARNING: Removing unreachable block (ram,0x01406dfa) */
/* WARNING: Removing unreachable block (ram,0x01406e06) */
/* WARNING: Removing unreachable block (ram,0x0140719c) */
/* WARNING: Removing unreachable block (ram,0x014071ac) */

void FUN_014068e0(void)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  
  lVar10 = DAT_027cc8c0;
  if ((*(longlong *)(unaff_RDI + 0x20) != 0) &&
     (plVar5 = (longlong *)*unaff_RSI, plVar5 != (longlong *)0x0)) {
    if (DAT_027cc8c0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar5 + 0x50))();
    cVar3 = '\x01';
    if (cVar2 == '\0') {
      plVar5 = (longlong *)*unaff_RSI;
      local_108 = 0;
      lVar9 = *(longlong *)(unaff_RDI + 0x60);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      local_108 = '\x01';
      local_110 = lVar9;
      cVar3 = (**(code **)(*plVar5 + 0x50))();
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      local_88 = '\0';
      local_90 = 0;
      local_78 = '\0';
      local_80 = 0;
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar5 = (longlong)&DAT_0257ef30;
      plVar5[5] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      *(undefined4 *)(plVar5 + 4) = 0;
      (*DAT_0257ef48)();
      local_60 = plVar5;
      uVar6 = FUN_00d90650();
      pcVar1 = DAT_025795c0;
      if ((int)uVar6 == -1) {
        local_58 = 0;
        local_40 = (undefined8 *)0x0;
      }
      else {
        local_40 = (undefined8 *)0x0;
        local_58 = 0;
        do {
          local_f8 = 0;
          lVar10 = *(longlong *)(unaff_RDI + 0x20);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          local_f8 = '\x01';
          local_100 = lVar10;
          (**(code **)(*local_60 + 0x368))();
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_60 + 0x378))();
          uVar12 = FUN_00d95590();
          local_d0 = local_50;
          local_c8 = 0;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              uVar12 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_c8 = '\x01';
          uVar12 = (**(code **)(*local_60 + 0x3e0))(uVar12,0);
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            uVar12 = FUN_00d50b20();
          }
          if (local_80 == 0) {
            lVar10 = 0;
            if (local_90 == 0) goto LAB_01406bfe;
LAB_01406c35:
            cVar2 = local_78;
            cVar3 = local_88;
            lVar9 = local_90;
            if ((local_78 != '\0') && (lVar10 != 0)) {
              uVar12 = FUN_00d50b00();
            }
            local_90 = lVar10;
            if ((cVar3 != '\0') && (lVar9 != 0)) {
              uVar12 = FUN_00d50b20();
            }
          }
          else {
            local_80 = 0;
            if (local_78 != '\0') {
              uVar12 = FUN_00d50b20();
            }
            local_78 = '\0';
            lVar10 = local_80;
            if (local_90 != local_80) goto LAB_01406c35;
LAB_01406bfe:
            cVar2 = local_88;
            if (((local_78 != '\0') && (local_88 == '\0')) && (lVar10 != 0)) {
              uVar12 = FUN_00d50b00();
              cVar2 = '\x01';
            }
          }
          local_88 = cVar2;
          local_e8 = 0;
          lVar10 = *(longlong *)(unaff_RDI + 0x70);
          if (lVar10 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_e8 = '\x01';
          local_f0 = lVar10;
          uVar12 = (**(code **)(*local_60 + 0x3e0))(uVar12,&local_90);
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            uVar12 = FUN_00d50b20();
          }
          lVar10 = DAT_02781600;
          if (DAT_02781600 != 0) {
            uVar12 = FUN_00d50b00();
          }
          uVar12 = (**(code **)(*local_60 + 0x3e0))(uVar12,&local_80);
          if (lVar10 != 0) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_80 == 0) || (iVar4 = FUN_00d8c7a0(), uVar12 = extraout_XMM0_Da, iVar4 == 0)) {
            lVar10 = DAT_027c0ae0;
            if (DAT_027c0ae0 != 0) {
              uVar12 = FUN_00d50b00();
            }
            FUN_01406800(uVar12,uVar6 >> 0x20);
            local_b0 = local_70;
            local_a8 = 0;
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_a8 = '\x01';
            FUN_00d98c80(&local_b0);
            lVar9 = *(longlong *)(unaff_RDI + 0x20);
            lVar8 = lVar9;
            if (lVar9 != local_50) {
              if (local_48 == '\0') {
                if (local_50 == 0) {
                  lVar8 = 0;
                }
                else {
                  FUN_00d50b00();
                  lVar9 = *(longlong *)(unaff_RDI + 0x20);
                  lVar8 = local_50;
                }
              }
              else {
                local_48 = '\0';
                lVar8 = local_50;
              }
              *(longlong *)(unaff_RDI + 0x20) = lVar8;
              if (lVar9 != 0) {
                FUN_00d50b20();
                lVar8 = local_50;
              }
            }
            if ((local_48 != '\0') && (lVar8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            puVar7 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &DAT_025795a8;
            (*pcVar1)();
            if (((char)local_58 != '\0') && (local_40 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_90 != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
              FUN_00d8dbf0();
            }
            FUN_00d8dbf0();
            cVar2 = FUN_013ff8e0(&local_d4,local_d8);
            lVar10 = DAT_027cc8c0;
            if (cVar2 != '\0') {
              plVar5 = (longlong *)*unaff_RSI;
              if (DAT_027cc8c0 != 0) {
                FUN_00d50b00();
              }
              cVar2 = (**(code **)(*plVar5 + 0x50))();
              uVar12 = extraout_XMM0_Da_00;
              if (lVar10 != 0) {
                uVar12 = FUN_00d50b20();
              }
              if (cVar2 == '\0') {
                FUN_01715d40(uVar12,local_d4);
              }
              else {
                FUN_01715d40(uVar12,local_d4);
              }
            }
            FUN_00d8c7a0();
            uVar6 = FUN_00e7b4e0();
            lVar10 = DAT_027c0ae0;
            uVar12 = extraout_XMM0_Da_01;
            if (DAT_027c0ae0 != 0) {
              uVar12 = FUN_00d50b00();
            }
            FUN_01406800(uVar12,uVar6 >> 0x20);
            local_c0 = local_70;
            local_b8 = 0;
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_b8 = '\x01';
            FUN_00d98c80(&local_c0);
            lVar9 = *(longlong *)(unaff_RDI + 0x20);
            lVar8 = local_50;
            lVar11 = lVar9;
            if (lVar9 != local_50) {
              if (local_48 == '\0') {
                if (local_50 == 0) {
                  lVar8 = 0;
                }
                else {
                  FUN_00d50b00();
                  lVar9 = *(longlong *)(unaff_RDI + 0x20);
                  lVar8 = local_50;
                }
              }
              else {
                local_48 = '\0';
              }
              *(longlong *)(unaff_RDI + 0x20) = lVar8;
              lVar11 = lVar8;
              if (lVar9 != 0) {
                lVar8 = FUN_00d50b20();
                lVar11 = local_50;
              }
            }
            if ((local_48 != '\0') && (lVar11 != 0)) {
              lVar8 = FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              lVar8 = FUN_00d50b20();
            }
            if (lVar10 != 0) {
              lVar8 = FUN_00d50b20();
            }
            local_58 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            local_40 = puVar7;
          }
          uVar6 = FUN_00d90650();
        } while ((int)uVar6 != -1);
      }
      lVar10 = DAT_027c0ae0;
      if (DAT_027c0ae0 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d90eb0();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      lVar10 = DAT_027c0ae0;
      if (cVar2 != '\0') {
        if (DAT_027c0ae0 != 0) {
          FUN_00d50b00();
        }
        local_120 = lVar10;
        local_118 = '\x01';
        FUN_00d8ede0();
        local_a0 = local_70;
        local_98 = 0;
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_98 = '\x01';
        FUN_00d98db0(&local_a0,&local_120,0);
        lVar10 = *(longlong *)(unaff_RDI + 0x20);
        lVar9 = lVar10;
        if (lVar10 != local_50) {
          if (local_48 == '\0') {
            if (local_50 == 0) {
              lVar9 = 0;
            }
            else {
              FUN_00d50b00();
              lVar10 = *(longlong *)(unaff_RDI + 0x20);
              lVar9 = local_50;
            }
          }
          else {
            local_48 = '\0';
            lVar9 = local_50;
          }
          *(longlong *)(unaff_RDI + 0x20) = lVar9;
          if (lVar10 != 0) {
            FUN_00d50b20();
            lVar9 = local_50;
          }
        }
        if ((local_48 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_58 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


