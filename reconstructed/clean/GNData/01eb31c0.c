// Function: FUN_01eb31c0
// Address: 01eb31c0
// Size: 599 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_01eb31c0(void)

{
  int iVar1;
  bool bVar2;
  int64_t *plVar3;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t local_48;
  char local_40;
  
  if ((int)this_ptr[0x39] == 1) {
    *(void*)(this_ptr + 0x29) = unaff_ESI;
    lVar5 = 0;
    bVar2 = false;
    plVar4 = (int64_t *)0x0;
    while( true ) {
      (**(code **)(*this_ptr + 0x4a0))();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 <= lVar5) break;
      (**(code **)(*this_ptr + 0x4a0))();
      plVar3 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + lVar5 * 8);
      if (plVar4 == plVar3) {
        if ((!bVar2) && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b00();
          plVar3 = plVar4;
          goto LAB_01eb338c;
        }
      }
      else {
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01eb338c:
        bVar2 = true;
        plVar4 = plVar3;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar4 + 0xa88))();
      (**(code **)(*plVar4 + 0x918))();
      lVar5 = lVar5 + 1;
    }
  }
  else {
    if ((int)this_ptr[0x39] != 2) {
      return;
    }
    *(void*)(this_ptr + 0x29) = unaff_ESI;
    lVar5 = 0;
    bVar2 = false;
    plVar4 = (int64_t *)0x0;
    while( true ) {
      (**(code **)(*this_ptr + 0x4a0))();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 <= lVar5) break;
      (**(code **)(*this_ptr + 0x4a0))();
      plVar3 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + lVar5 * 8);
      if (plVar4 == plVar3) {
        if ((!bVar2) && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b00();
          plVar3 = plVar4;
          goto LAB_01eb328c;
        }
      }
      else {
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01eb328c:
        bVar2 = true;
        plVar4 = plVar3;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar4 + 0xa88))();
      (**(code **)(*plVar4 + 0x918))();
      lVar5 = lVar5 + 1;
    }
  }
  if ((bVar2) && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

