// Function: FUN_01c6d4b0
// Address: 01c6d4b0
// Size: 956 bytes
// Class: GNPopUpButton


void FUN_01c6d4b0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  FUN_01d3abf0();
  local_38 = FUN_01e466c0();
  local_40 = '\0';
  local_48 = 0;
  if (*(longlong *)(unaff_RDI + 0x188) != 0) {
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x2c8);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 == 0) {
      iVar3 = FUN_01d3a5a0();
      if ((iVar3 == 1) && (*(int *)(unaff_RDI + 0x268) != 0)) {
        *(undefined4 *)(unaff_RDI + 0x268) = 0;
        (**(code **)(**(longlong **)(unaff_RDI + 0x158) + 0x478))();
        if (*(longlong *)(unaff_RDI + 0x158) != 0) {
          *(undefined8 *)(unaff_RDI + 0x158) = 0;
          FUN_00d50b20();
        }
        if (*(longlong *)(unaff_RDI + 0x270) != 0) {
          *(undefined8 *)(unaff_RDI + 0x270) = 0;
          FUN_00d50b20();
        }
        FUN_01e436c0();
        FUN_01c4d670();
      }
      local_88 = *unaff_RSI;
      local_80 = '\0';
      cVar2 = FUN_01c6cca0((undefined4)local_38);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        cVar2 = FUN_01c61680((undefined4)local_38,&local_48);
        if (cVar2 == '\0') {
          local_f8 = *unaff_RSI;
          local_f0 = 0;
          cVar2 = FUN_01c638f0((undefined4)local_38);
          if (cVar2 == '\0') {
            local_e8 = *unaff_RSI;
            local_e0 = 0;
            cVar2 = FUN_01c63d50();
            if (cVar2 == '\0') {
              local_d8 = *unaff_RSI;
              local_d0 = 0;
              FUN_01c60a90((undefined4)local_38);
              local_c8 = *unaff_RSI;
              local_c0 = 0;
              cVar2 = FUN_01c6a410((undefined4)local_38);
              if (cVar2 == '\0') {
                local_68 = *unaff_RSI;
                local_60 = '\0';
                cVar2 = FUN_01c63f60((undefined4)local_38);
                if ((local_60 != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar2 == '\0') {
                  local_b8 = *unaff_RSI;
                  local_b0 = 0;
                  cVar2 = FUN_01c635e0((undefined4)local_38);
                  if (cVar2 == '\0') {
                    local_a8 = *unaff_RSI;
                    local_a0 = 0;
                    cVar2 = FUN_01c62da0((undefined4)local_38);
                    if (cVar2 == '\0') {
                      local_58 = *unaff_RSI;
                      local_50 = '\0';
                      FUN_01e459c0();
                      if ((local_50 != '\0') && (local_58 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_78 = *unaff_RSI;
          local_70 = '\0';
          local_128 = local_48;
          local_120 = 0;
          cVar2 = FUN_01c61bb0((undefined4)local_38,&local_128);
          uVar4 = extraout_XMM0_Da;
          if ((local_70 != '\0') && (local_78 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            local_118 = *unaff_RSI;
            local_110 = 0;
            local_108 = local_48;
            local_100 = 0;
            FUN_01c631e0(uVar4,&local_108);
          }
        }
      }
      goto LAB_01c6d61b;
    }
  }
  local_98 = *unaff_RSI;
  local_90 = '\0';
  FUN_01e459c0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01c6d61b:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


