// Function: FUN_002f2ac0
// Address: 002f2ac0
// Size: 1847 bytes
// Class: MDDocumentViewController


/* WARNING: Removing unreachable block (ram,0x002f2cde) */
/* WARNING: Removing unreachable block (ram,0x002f2cee) */
/* WARNING: Removing unreachable block (ram,0x002f2b13) */
/* WARNING: Removing unreachable block (ram,0x002f2b23) */

int FUN_002f2ac0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(unaff_RDI + 0x2e0) == '\0') {
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_48 + 0x450))();
    uVar8 = extraout_XMM0_Da;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      iVar4 = FUN_01ddf560();
    }
    else {
      local_118 = *unaff_RSI;
      local_110 = '\0';
      FUN_002f5380(uVar8,&local_118);
      plVar2 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        if (*(longlong *)(unaff_RDI + 0x2f0) != 0) {
          FUN_006f4810();
          FUN_01be8270();
          plVar2 = local_48;
          pcVar7 = local_38;
          if (local_40[0] != '\0') {
            pcVar7 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar7 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_01bcee20();
            plVar6 = *(longlong **)(unaff_RDI + 0x2e8);
            plVar5 = plVar6;
            if (plVar6 != local_48) {
              if (local_40[0] == '\0') {
                if (local_48 == (longlong *)0x0) {
                  plVar5 = (longlong *)0x0;
                }
                else {
                  FUN_00d50b00();
                  plVar6 = *(longlong **)(unaff_RDI + 0x2e8);
                  plVar5 = local_48;
                }
              }
              else {
                local_40[0] = '\0';
                plVar5 = local_48;
              }
              *(longlong **)(unaff_RDI + 0x2e8) = plVar5;
              if (plVar6 != (longlong *)0x0) {
                FUN_00d50b20();
                plVar5 = local_48;
              }
            }
            if ((local_40[0] != '\0') && (plVar5 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_f8 = *unaff_RSI;
          local_f0 = '\0';
          local_c0 = 0;
          lVar1 = *(longlong *)(unaff_RDI + 0x2e8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_c0 = '\x01';
          local_c8 = lVar1;
          FUN_006f4810();
          local_98 = local_48;
          local_90 = 0;
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          local_90 = '\x01';
          FUN_006f3f00();
          FUN_00757c60();
          local_88 = local_58;
          local_80 = 0;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_80 = '\x01';
          iVar4 = FUN_0007cb70(&local_88,&local_98,0,2);
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if (iVar4 != 0) {
            if (*(longlong *)(unaff_RDI + 0x2e8) != 0) {
              FUN_006f4810();
              (**(code **)(*local_58 + 0x930))();
              local_78 = local_48;
              local_70 = 0;
              if (local_40[0] == '\0') {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              local_70 = '\x01';
              local_e0 = '\0';
              local_e8 = 0;
              FUN_01c025c0(0,&local_e8,0);
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_38[0] == '\0') {
              return iVar4;
            }
            if (plVar2 == (longlong *)0x0) {
              return iVar4;
            }
            FUN_00d50b20();
            return iVar4;
          }
          if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar4 = 0;
      }
      else {
        local_108 = *unaff_RSI;
        local_100 = '\0';
        local_d0 = 0;
        lVar1 = *(longlong *)(unaff_RDI + 0x2e8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_d0 = '\x01';
        local_d8 = lVar1;
        iVar4 = (**(code **)(*plVar2 + 0x388))(1,&local_d8);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((iVar4 != 0) && (*(longlong *)(unaff_RDI + 0x2e8) != 0)) {
          FUN_01bbfb40();
          (**(code **)(*local_58 + 0x930))();
          local_b8 = local_48;
          local_b0 = 0;
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          local_b0 = '\x01';
          FUN_01bc0650();
          local_a8 = local_68;
          local_a0 = 0;
          if (local_60 == '\0') {
            if (local_68 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_a0 = '\x01';
          FUN_01c025c0(0,&local_a8,0);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    iVar4 = FUN_01ddf560();
  }
  return iVar4;
}


