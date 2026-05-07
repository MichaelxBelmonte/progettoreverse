// Function: FUN_00b713e0
// Address: 00b713e0
// Size: 678 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b71582) */
/* WARNING: Removing unreachable block (ram,0x00b71587) */
/* WARNING: Removing unreachable block (ram,0x00b714ca) */
/* WARNING: Removing unreachable block (ram,0x00b714d3) */
/* WARNING: Removing unreachable block (ram,0x00b7153a) */
/* WARNING: Removing unreachable block (ram,0x00b71466) */
/* WARNING: Removing unreachable block (ram,0x00b7146f) */

void FUN_00b713e0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  lVar4 = *(longlong *)(unaff_RSI + 0x30);
  do {
    if (*(int *)(lVar4 + 0xc) == 0) {
      FUN_00b71320();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_00b71480;
        }
      }
      else if (local_40 != 0) {
LAB_00b71480:
        lVar4 = *(longlong *)(unaff_RSI + 0x30);
        uVar6 = FUN_00b5b3a0();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            uVar6 = FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_40 = local_60;
        FUN_00d214d0(uVar6,*(undefined4 *)(lVar4 + 0xc));
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        uVar6 = FUN_00b5beb0();
        *(undefined8 *)(unaff_RSI + 0x38) = uVar6;
        if (*(longlong *)(unaff_RSI + 0x40) != 0) {
          *(undefined8 *)(unaff_RSI + 0x40) = 0;
          FUN_00d50b20();
        }
        FUN_00b5c000();
        lVar4 = *(longlong *)(unaff_RSI + 0x40);
        if (lVar4 != local_60) {
          if (local_60 == 0) {
            *(undefined8 *)(unaff_RSI + 0x40) = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = *(longlong *)(unaff_RSI + 0x40);
            *(longlong *)(unaff_RSI + 0x40) = local_60;
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        local_38 = '\0';
        if (*(longlong *)(unaff_RSI + 0x40) != 0) {
          *(undefined8 *)(unaff_RSI + 0x40) = 0;
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      lVar4 = *(longlong *)(unaff_RSI + 0x30);
      if (*(int *)(lVar4 + 0xc) == 0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        return;
      }
    }
  } while (*(int *)(lVar4 + 0xc) < 1);
  lVar4 = **(longlong **)(lVar4 + 0x10);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    lVar5 = lVar4;
  }
  FUN_00d23620();
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(unaff_RSI + 0x38);
  }
  if (param_1 != (longlong *)0x0) {
    lVar1 = *(longlong *)(unaff_RSI + 0x40);
    lVar2 = *param_1;
    lVar3 = param_1[1];
    if (lVar2 == lVar1) {
      if (((char)lVar3 != '\0') || (lVar1 == 0)) goto LAB_00b71658;
      FUN_00d50b00();
    }
    else {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *param_1 = lVar1;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_00b71658:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((lVar4 == 0) && (lVar5 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


