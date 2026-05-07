// Function: FUN_014636d0
// Address: 014636d0
// Size: 682 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0146394b) */
/* WARNING: Removing unreachable block (ram,0x01463958) */

void FUN_014636d0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_50;
  char local_48;
  
  FUN_00d242c0(param_1,0);
  lVar3 = *unaff_RSI;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar9 = 0;
    lVar8 = 0;
    bVar2 = false;
    lVar7 = 0;
    lVar6 = 0;
    bVar1 = false;
    do {
      pVar5 = (pthread_key_t)lVar6;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar9 * 8);
      if (lVar7 == lVar3) {
        if ((!bVar1) && (lVar7 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar7 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar7 = lVar3;
        }
        else {
          bVar1 = true;
          lVar7 = lVar3;
        }
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014f60f0();
      if (lVar8 == local_50) {
        if ((bVar2) || (lVar8 == 0)) goto joined_r0x014638c1;
        bVar2 = true;
        if (local_48 == '\0') {
          FUN_00d50b00();
          lVar3 = lVar8;
          goto LAB_014638a4;
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        lVar3 = local_50;
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
        }
LAB_014638a4:
        bVar2 = true;
        lVar8 = lVar3;
joined_r0x014638c1:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else if ((bVar2) && (lVar8 != 0)) {
        FUN_00d50b20();
        bVar2 = true;
        lVar8 = local_50;
      }
      else {
        bVar2 = true;
        lVar8 = local_50;
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013293f0();
      lVar9 = lVar9 + 1;
      lVar3 = *unaff_RSI;
      lVar6 = (longlong)*(int *)(lVar3 + 0xc);
    } while (lVar9 < lVar6);
    if ((bVar1) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


