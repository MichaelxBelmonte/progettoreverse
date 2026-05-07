// Function: FUN_00339ee0
// Address: 00339ee0
// Size: 546 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00339f2c) */
/* WARNING: Removing unreachable block (ram,0x00339f35) */

int FUN_00339ee0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  longlong **pplVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_50;
  char local_48;
  int local_3c;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x4a0))();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_00339f3a;
    }
  }
  else if (local_88 != 0) {
LAB_00339f3a:
    if (*(int *)(local_88 + 0xc) < 1) {
      local_3c = 0;
    }
    else {
      lVar6 = 0;
      local_3c = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_88 + 0x10) + lVar6 * 8);
        local_50 = plVar1;
        FUN_000f5df0();
        pplVar5 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar5 = &local_50;
          if (cVar3 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar5 != (longlong *)0x0) {
          FUN_01e4ec80();
          lVar2 = DAT_02702958;
          if (DAT_02702958 != 0) {
            FUN_00d50b00();
          }
          FUN_000175c0();
          plVar1 = local_50;
          FUN_00053ac0();
          pplVar5 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar5 = &local_50;
            if (cVar3 == '\0') {
              pplVar5 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar5;
          local_38[0] = *(char *)(pplVar5 + 1);
          pplVar5 = pplVar5 + 1;
          if (local_38[0] == '\0') {
            pplVar5 = (longlong **)local_38;
          }
          *(undefined1 *)pplVar5 = 0;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            bVar4 = FUN_00d45ad0();
            local_3c = local_3c + (uint)bVar4;
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_88 + 0xc));
    }
    FUN_0033c540();
    FUN_00d50b20();
    return local_3c;
  }
  return 0;
}


