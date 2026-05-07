// Function: FUN_000c3e50
// Address: 000c3e50
// Size: 543 bytes
// Class: GNRootView


/* WARNING: Removing unreachable block (ram,0x000c3f89) */
/* WARNING: Removing unreachable block (ram,0x000c3f92) */
/* WARNING: Removing unreachable block (ram,0x000c4004) */
/* WARNING: Removing unreachable block (ram,0x000c400d) */
/* WARNING: Removing unreachable block (ram,0x000c3eb4) */
/* WARNING: Removing unreachable block (ram,0x000c3ebd) */

longlong * FUN_000c3e50(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_000c41f0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    plVar1 = *(longlong **)(unaff_RSI + 0x158);
    (**(code **)(*plVar1 + 0x368))();
    if ((*(longlong *)(unaff_RSI + 0x168) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(unaff_RSI + 0x168) + 0x10), 0 < *(int *)(lVar2 + 0xc)))
    {
      lVar4 = 0;
      do {
        FUN_0051be00();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        cVar3 = FUN_00d24090();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          FUN_0051b590();
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
          if (*(int *)(local_40 + 0xc) == *(int *)(*param_2 + 0xc)) break;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 0xc));
    }
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    (**(code **)(*plVar1 + 0x378))();
  }
  return unaff_RDI;
}


