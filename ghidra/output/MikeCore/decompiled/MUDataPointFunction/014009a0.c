// Function: FUN_014009a0
// Address: 014009a0
// Size: 504 bytes
// Class: MUDataPointFunction


longlong * FUN_014009a0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (1 < *(int *)(lVar1 + 0xc))) {
    uVar7 = 0;
    uVar6 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if ((int)uVar5 != 0) {
          local_58 = '\0';
          lVar3 = **(longlong **)(*param_2 + 0x10);
          local_38 = 0;
          local_60 = lVar2;
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\x01';
          local_40 = lVar3;
          FUN_00d98db0(&local_40,&local_60,0,param_4,uVar6,uVar7);
          lVar3 = local_50;
          lVar2 = *unaff_RSI;
          if (lVar2 == local_50) {
            if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_01400afd;
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto LAB_01400af8;
            }
LAB_01400ac2:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_48 = '\0';
          }
          else {
            lVar4 = unaff_RSI[1];
            if (local_48 != '\0') {
              *unaff_RSI = local_50;
              if (((char)lVar4 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01400ac2;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            *unaff_RSI = lVar3;
            if (((char)lVar4 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
LAB_01400af8:
            *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01400afd:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar5 & 0xffffffff;
      } while ((int)uVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00018280();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *unaff_RSI;
  if ((char)unaff_RSI[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(unaff_RSI + 1) = 0;
  }
  return unaff_RDI;
}


