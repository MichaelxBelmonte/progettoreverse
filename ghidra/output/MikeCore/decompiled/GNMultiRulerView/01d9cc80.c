// Function: FUN_01d9cc80
// Address: 01d9cc80
// Size: 821 bytes
// Class: GNMultiRulerView


/* WARNING: Removing unreachable block (ram,0x01d9cd47) */
/* WARNING: Removing unreachable block (ram,0x01d9cd53) */
/* WARNING: Removing unreachable block (ram,0x01d9ccf9) */
/* WARNING: Removing unreachable block (ram,0x01d9cd05) */
/* WARNING: Removing unreachable block (ram,0x01d9cf05) */
/* WARNING: Removing unreachable block (ram,0x01d9cf0e) */
/* WARNING: Removing unreachable block (ram,0x01d9cf80) */
/* WARNING: Removing unreachable block (ram,0x01d9cf8d) */

undefined8 * FUN_01d9cc80(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_a0;
  char local_98;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(longlong *)(unaff_RSI + 0x138) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RSI + 0x150) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x168);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
        (**(code **)(*plVar2 + 0x7b8))();
        if (local_40 == (longlong *)0x0) {
          bVar5 = false;
        }
        else {
          (**(code **)(*plVar2 + 0x7b8))();
          if (local_68[0x2a] == 0) {
            local_50 = '\0';
            local_58 = 0;
            bVar5 = false;
          }
          else {
            FUN_01cf3f40();
            bVar5 = local_58 != 0;
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar5) {
          (**(code **)(*plVar2 + 0x7b8))();
          FUN_01cf3f40();
          (**(code **)(*local_68 + 0x7b0))();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d235a0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = '\0';
        FUN_00d21140();
        lVar4 = lVar4 + 1;
        local_40 = plVar2;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_01da22b0();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


