// Function: FUN_0131ba70
// Address: 0131ba70
// Size: 512 bytes
// Class: MULSSGenerator


byte FUN_0131ba70(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_d8 = *unaff_RSI;
  local_d0 = 0;
  bVar2 = FUN_013157a0(param_3,&local_d8,1);
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_70 = 0;
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        local_c8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        local_c0 = 0;
        local_78 = local_c8;
        cVar3 = FUN_01316d80();
        if (cVar3 == '\0') {
          bVar2 = 0;
        }
        lVar7 = lVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115e00();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  local_b8 = lVar1;
  FUN_01317d70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_a8 = *unaff_RSI;
  local_a0 = 0;
  bVar4 = FUN_01319320(param_4,0);
  local_98 = *unaff_RSI;
  local_90 = 0;
  bVar5 = FUN_01319960();
  local_88 = *unaff_RSI;
  local_80 = 0;
  bVar6 = FUN_0131a710();
  return bVar6 & bVar5 & bVar4 & bVar2;
}


