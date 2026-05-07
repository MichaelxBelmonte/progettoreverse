// Function: FUN_003372c0
// Address: 003372c0
// Size: 542 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x0033730c) */
/* WARNING: Removing unreachable block (ram,0x00337315) */

void FUN_003372c0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong **pplVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x4a0))();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
    return;
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_80 + 0x10) + lVar6 * 8);
      local_48 = plVar1;
      FUN_000f5df0();
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar5 = &local_48;
        if (cVar4 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar5 != (longlong *)0x0) {
        FUN_01e4ec80();
        lVar3 = DAT_02702958;
        if (DAT_02702958 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        plVar2 = local_48;
        FUN_00053ac0();
        pplVar5 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar5 = &local_48;
          if (cVar4 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
        plVar2 = *pplVar5;
        local_38[0] = *(char *)(pplVar5 + 1);
        pplVar5 = pplVar5 + 1;
        if (local_38[0] == '\0') {
          pplVar5 = (longlong **)local_38;
        }
        *(undefined1 *)pplVar5 = 0;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d45ad0();
          (**(code **)(*plVar1 + 0x918))();
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(local_80 + 0xc));
  }
  FUN_0033c540();
  FUN_00d50b20();
  return;
}


