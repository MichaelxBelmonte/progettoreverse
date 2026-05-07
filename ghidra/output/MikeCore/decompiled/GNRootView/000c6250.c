// Function: FUN_000c6250
// Address: 000c6250
// Size: 615 bytes
// Class: GNRootView
// String references:
//   "Melodyne #%I"


/* WARNING: Removing unreachable block (ram,0x000c630e) */
/* WARNING: Removing unreachable block (ram,0x000c6317) */

undefined8 * FUN_000c6250(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  longlong lVar9;
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  bVar4 = false;
  do {
    FUN_00d8cb40();
    if (local_40 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      bVar4 = true;
      plVar8 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    if (*(longlong *)(unaff_RSI + 0x168) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(unaff_RSI + 0x168) + 0x10);
      pVar7 = *(pthread_key_t *)(lVar2 + 0xc);
      if (0 < (int)pVar7) {
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar9 * 8);
          if ((*(longlong *)(lVar3 + 0x308) == 0) && (*param_2 != lVar3)) {
            FUN_0051be00();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6000();
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            cVar5 = (**(code **)(*plVar8 + 0x50))();
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar5 != '\0') {
              if (bVar4) {
                FUN_00d50b20();
                bVar4 = false;
                plVar8 = (longlong *)0x0;
              }
              else {
                bVar4 = false;
                plVar8 = (longlong *)0x0;
              }
              break;
            }
            pVar7 = *(pthread_key_t *)(lVar2 + 0xc);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)pVar7);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar8;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      (**(code **)(*plVar1 + 0x378))();
      return unaff_RDI;
    }
  } while( true );
}


