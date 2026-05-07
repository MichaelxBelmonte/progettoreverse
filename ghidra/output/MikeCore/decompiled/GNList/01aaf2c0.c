// Function: FUN_01aaf2c0
// Address: 01aaf2c0
// Size: 1147 bytes
// Class: GNList


void FUN_01aaf2c0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  bool bVar6;
  longlong local_130;
  char local_128;
  undefined1 local_e8 [8];
  undefined1 local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_01aa3f10();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01aaed70();
        lVar3 = local_50;
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
        }
        FUN_01aa3f40();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (*(longlong *)(unaff_RDI + 0x88) != 0) {
          FUN_01aa3f90();
          if (local_50 == 0) {
            bVar6 = false;
          }
          else {
            FUN_01aa3f90();
            (**(code **)(*local_d8 + 0x368))();
            FUN_017bf050();
            (**(code **)(*local_c8 + 0x368))();
            lVar2 = local_b8;
            if (local_b0 == '\0') {
              if (local_b8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0 = '\0';
            }
            cVar4 = FUN_00d90870();
            bVar6 = true;
            if (cVar4 == '\0') {
              FUN_01aa3f90();
              lVar3 = local_a8;
              if (local_a0 == '\0') {
                if (local_a8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a0 = '\0';
              }
              local_e0 = 1;
              FUN_01aafac0(param_1,local_e8);
              bVar6 = local_130 != 0;
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if (lVar3 != 0) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (bVar6) {
            FUN_01aa3f10();
            local_60 = local_40;
            local_58 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_58 = '\x01';
            FUN_00e427c0(param_1,&local_60);
            lVar2 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_01aa3f40();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01b53440();
  }
  return;
}


