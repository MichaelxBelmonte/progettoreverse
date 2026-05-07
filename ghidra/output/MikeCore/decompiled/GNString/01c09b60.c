// Function: FUN_01c09b60
// Address: 01c09b60
// Size: 551 bytes
// Class: GNString
// String references:
//   "property"


void FUN_01c09b60(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  longlong local_88;
  char local_80;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01c19570();
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 != 0) {
    uVar5 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
        FUN_00d403d0();
        lVar3 = DAT_027e9130;
        if (DAT_027e9130 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\0';
        uVar7 = 2;
        pcVar8 = "property";
        puVar6 = &DAT_026669d0;
        local_60 = lVar2;
        if (unaff_RSI != 0) {
          FUN_00d50b00();
        }
        FUN_0036bfe0();
        local_40 = local_50;
        local_38 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_38 = '\x01';
        FUN_00d40470(&local_40,&local_60,1,0,uVar5,puVar6,uVar7,pcVar8);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_01c2d490();
  }
  return;
}


