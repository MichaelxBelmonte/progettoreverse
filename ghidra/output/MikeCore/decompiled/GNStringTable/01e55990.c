// Function: FUN_01e55990
// Address: 01e55990
// Size: 744 bytes
// Class: GNStringTable


/* WARNING: Removing unreachable block (ram,0x01e55c10) */
/* WARNING: Removing unreachable block (ram,0x01e55c1d) */
/* WARNING: Removing unreachable block (ram,0x01e55bdb) */
/* WARNING: Removing unreachable block (ram,0x01e55be4) */
/* WARNING: Removing unreachable block (ram,0x01e55ae7) */
/* WARNING: Removing unreachable block (ram,0x01e55af0) */
/* WARNING: Removing unreachable block (ram,0x01e55b97) */
/* WARNING: Removing unreachable block (ram,0x01e55ba4) */
/* WARNING: Removing unreachable block (ram,0x01e55a1d) */
/* WARNING: Removing unreachable block (ram,0x01e55a2a) */

void FUN_01e55990(void)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  if (*(char *)(unaff_RSI + 0x40) == '\0') {
    if (*(longlong *)(unaff_RSI + 0x10) == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      FUN_01e40eb0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 != '\0') goto LAB_01e55aac;
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        *unaff_RDI = (longlong)local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
    }
LAB_01e55a78:
    local_40 = (longlong *)0x0;
  }
  else {
    if ((*(longlong *)(unaff_RSI + 0x18) == 0) || (cVar3 = FUN_01e5c800(), cVar3 != '\0')) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    cVar3 = FUN_01e5c8a0();
    if (cVar3 != '\0') {
      FUN_01f27fe0();
      FUN_01f2e7e0();
      if (local_40 == (longlong *)0x0) {
        bVar2 = true;
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar2 = false;
        }
        else {
          local_38 = '\0';
          bVar2 = false;
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (plVar4 == (longlong *)0x0) {
LAB_01e55b55:
        FUN_01f27fe0();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            *unaff_RDI = (longlong)local_40;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            goto LAB_01e55c5c;
          }
          local_40 = (longlong *)0x0;
        }
      }
      else {
        lVar1 = *(longlong *)(unaff_RSI + 0x18);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar4 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') goto LAB_01e55b55;
        FUN_01e5cf30();
        if (local_40 == (longlong *)0x0) {
          if (bVar2) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            FUN_00d50b00();
            *unaff_RDI = (longlong)plVar4;
            goto LAB_01e55ab0;
          }
          FUN_00d50b00();
          local_40 = plVar4;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      *unaff_RDI = (longlong)local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01e55c5c:
      if (!bVar2 && plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    plVar4 = *(longlong **)(unaff_RSI + 0x20);
    if (plVar4 == (longlong *)0x0) {
      FUN_01f27fe0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          *unaff_RDI = (longlong)local_40;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_01e55a78;
      }
    }
    else {
      FUN_00d50b00();
      local_40 = plVar4;
    }
  }
LAB_01e55aac:
  *unaff_RDI = (longlong)local_40;
LAB_01e55ab0:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


