// Function: FUN_01251710
// Address: 01251710
// Size: 558 bytes
// Class: GNNull
// String references:
//   "%@"
//   "sequence: "
//   "(GNNull)"
//   " (%Q) "
//   "const sequence: %@"


undefined8 * FUN_01251710(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar5;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  char local_38;
  
  puVar4 = DAT_027be958;
  if (*(int *)(*(longlong *)(unaff_RSI + 0x48) + 0x18) + 7U < 0xf) {
    lVar1 = **(longlong **)(*(longlong *)(unaff_RSI + 0x50) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d8cb40();
      if (lVar1 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025795a8;
    (*DAT_025795c0)();
    FUN_00d94d80();
    lVar1 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          if (lVar2 == 0) {
            FUN_00d8db40();
          }
          else {
            local_48 = 1;
            local_50 = &DAT_024c5048;
            local_38 = 0;
            FUN_00d50b00();
            local_40 = (undefined4)lVar2;
            uStack_3c = (undefined4)((ulonglong)lVar2 >> 0x20);
            local_38 = '\x01';
            FUN_00d94d80();
            local_50 = &DAT_024c5048;
            if ((local_38 != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
              FUN_00d50b20();
            }
          }
          if ((int)lVar5 != *(int *)(lVar1 + 0xc) + -1) {
            local_48 = 1;
            local_50 = (undefined8 *)&DAT_025d0e78;
            uVar3 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10) + lVar5 * 8);
            uStack_44 = (undefined4)uVar3;
            local_40 = (undefined4)((ulonglong)uVar3 >> 0x20);
            FUN_00d94d80(&DAT_025d0e78,&local_50);
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


