// Function: FUN_00ccfb30
// Address: 00ccfb30
// Size: 563 bytes
// Class: GNFileArchivePrivate


/* WARNING: Removing unreachable block (ram,0x00ccfc71) */
/* WARNING: Removing unreachable block (ram,0x00ccfc7a) */
/* WARNING: Removing unreachable block (ram,0x00ccfd34) */
/* WARNING: Removing unreachable block (ram,0x00ccfd3d) */
/* WARNING: Removing unreachable block (ram,0x00ccfc09) */
/* WARNING: Removing unreachable block (ram,0x00ccfc12) */

void FUN_00ccfb30(code *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_60;
  char local_58;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar4 = *unaff_RSI;
  if (*(int *)(lVar4 + 0x1c) != 0) {
    if (param_1 == (code *)0x0) {
      lVar6 = 0x20;
      uVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x10);
        if ((*(longlong *)(lVar1 + -0x18 + lVar6) != 0) && (*(int *)(lVar1 + lVar6) == param_2)) {
          FUN_00cd0ea0(lVar4,(int)uVar5 + 1);
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          lVar4 = *unaff_RSI;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x23c;
      } while (uVar5 < *(uint *)(lVar4 + 0x1c));
    }
    else {
      lVar6 = 0;
      uVar5 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x10);
        if (((*(longlong *)(lVar4 + 8 + lVar6) != 0) && (*(int *)(lVar4 + 0x20 + lVar6) == param_2))
           && (cVar2 = (*param_1)(), cVar2 != '\0')) {
          FUN_00cd0ea0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
        }
        uVar5 = uVar5 + 1;
        lVar4 = *unaff_RSI;
        lVar6 = lVar6 + 0x23c;
      } while (uVar5 < *(uint *)(lVar4 + 0x1c));
    }
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


