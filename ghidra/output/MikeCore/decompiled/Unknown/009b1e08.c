// Function: FUN_009b1e08
// Address: 009b1e08
// Size: 505 bytes
// Class: Unknown


void FUN_009b1e08(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  
  uVar5 = *(ulonglong *)(*(longlong *)(unaff_RSI + -8) + 0x38);
  lVar3 = *(longlong *)(unaff_RDI + -8);
  puVar1 = (ulonglong *)(lVar3 + 0x38);
  if (uVar5 < 2) {
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(ulonglong **)(lVar3 + 0x40) = puVar1;
    *(longlong *)(*(longlong *)(unaff_RDI + -8) + 0x48) = *(longlong *)(unaff_RDI + -8) + 0x38;
  }
  else {
    *puVar1 = *puVar1 & 0xfffffffffffffffe | uVar5 & 1;
    lVar3 = FUN_0098e5d8();
    *(ulonglong *)(*(longlong *)(unaff_RDI + -8) + 0x38) =
         *(ulonglong *)(*(longlong *)(unaff_RDI + -8) + 0x38) & 1 | lVar3 + 0x38U;
    lVar3 = FUN_0098e5d8();
    *(longlong *)(*(longlong *)(unaff_RDI + -8) + 0x40) = lVar3 + 0x38;
    lVar3 = FUN_0098e5d8();
    *(longlong *)(*(longlong *)(unaff_RDI + -8) + 0x48) = lVar3 + 0x38;
    if (*(longlong *)(param_2 + 0x28) != 0) {
      plVar8 = *(longlong **)(param_2 + 0x20);
      plVar4 = plVar8 + *(longlong *)(param_2 + 0x28) * 2;
      do {
        lVar3 = *plVar8;
        lVar2 = plVar8[1];
        puVar1 = (ulonglong *)(lVar2 + 0x38);
        uVar5 = (ulonglong)((uint)*(undefined8 *)(lVar3 + 0x38) & 1);
        uVar7 = *(ulonglong *)(lVar2 + 0x38) & 0xfffffffffffffffe | uVar5;
        *(ulonglong *)(lVar2 + 0x38) = uVar7;
        uVar9 = *(ulonglong *)(lVar3 + 0x38) & 0xfffffffffffffffe;
        if (uVar9 == 0) {
          *puVar1 = uVar5;
        }
        else {
          lVar6 = FUN_0098e5d8(uVar7,param_2);
          *puVar1 = (ulonglong)((uint)*puVar1 & 1) | lVar6 + 0x38U;
          if (*(longlong *)(uVar9 + 8) == lVar3 + 0x38) {
            *(ulonglong **)(lVar6 + 0x40) = puVar1;
          }
          else if (*(longlong *)(uVar9 + 0x10) == lVar3 + 0x38) {
            *(ulonglong **)(lVar6 + 0x48) = puVar1;
          }
        }
        if (*(longlong *)(lVar3 + 0x40) == 0) {
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        if (*(longlong *)(lVar3 + 0x48) == 0) {
          *(undefined8 *)(lVar2 + 0x48) = 0;
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar4);
    }
  }
  FUN_0098e628();
  return;
}


