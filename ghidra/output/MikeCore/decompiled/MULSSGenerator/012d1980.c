// Function: FUN_012d1980
// Address: 012d1980
// Size: 1130 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012d19df) */
/* WARNING: Removing unreachable block (ram,0x012d19eb) */
/* WARNING: Removing unreachable block (ram,0x012d1a60) */
/* WARNING: Removing unreachable block (ram,0x012d1a69) */
/* WARNING: Removing unreachable block (ram,0x012d1c2f) */
/* WARNING: Removing unreachable block (ram,0x012d1c38) */
/* WARNING: Removing unreachable block (ram,0x012d1c9b) */
/* WARNING: Removing unreachable block (ram,0x012d1ca8) */
/* WARNING: Removing unreachable block (ram,0x012d1cf0) */
/* WARNING: Removing unreachable block (ram,0x012d1d10) */
/* WARNING: Removing unreachable block (ram,0x012d1cf2) */
/* WARNING: Removing unreachable block (ram,0x012d1d12) */

void FUN_012d1980(void)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int local_40;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x170);
  if (lVar1 == 0) {
    lVar1 = *unaff_RSI;
    lVar5 = *(longlong *)(unaff_RDI + 0xf8);
    if (lVar5 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0xf8) = lVar1;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d243f0();
  }
  else {
    lVar5 = *(longlong *)(lVar1 + 0x10);
    if ((lVar5 != *unaff_RSI) ||
       (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x50))(), cVar2 == '\0')) {
      pVar9 = (pthread_key_t)lVar5;
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_012dc5a0();
      (**(code **)(*plVar3 + 0x18))();
      lVar1 = *unaff_RSI;
      lVar5 = plVar3[2];
      if (lVar5 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        plVar3[2] = lVar1;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d243f0();
      if (*unaff_RSI != 0) {
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = FUN_00e8b990();
        lVar1 = plVar3[4];
        if (lVar1 != lVar5) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          plVar3[4] = lVar5;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_012d0a00();
      }
      lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + 0x20);
      lVar5 = plVar3[4];
      if ((lVar5 != lVar1) && (lVar5 != 0)) {
        FUN_00cbceb0();
        (**(code **)(*(longlong *)(unaff_RDI + 0xf0) + 0x10))();
        FUN_00d50b00();
        FUN_00cbc2c0();
        if ((longlong *)(unaff_RDI + 0xf0) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(unaff_RDI + 0xf0) + 0x10))();
          FUN_00d50b20();
        }
      }
      lVar6 = FUN_00e313b0();
      do {
        cVar2 = FUN_00e31450(3);
      } while (cVar2 == '\0');
      lVar7 = FUN_00e313b0();
      do {
        cVar2 = FUN_00e31450(1);
      } while (cVar2 == '\0');
      if (lVar7 != 0) {
        FUN_012d21a0();
        if (lVar7 != 0) {
          FUN_00d50b00();
          local_40 = -1;
          while( true ) {
            lVar8 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar7 + 0xc) <= local_40) break;
            (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0x10) + 8 + lVar8 * 8) + 0x370))();
          }
          FUN_00540a20();
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if ((lVar1 != 0) && (lVar5 != lVar1)) {
        FUN_00cbcef0();
        (**(code **)(*(longlong *)(unaff_RDI + 0xf0) + 0x10))();
        FUN_00d50b00();
        FUN_00cbc3f0();
        if ((longlong *)(unaff_RDI + 0xf0) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(unaff_RDI + 0xf0) + 0x10))();
          FUN_00d50b20();
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


