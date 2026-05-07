// Function: FUN_01b9f1e0
// Address: 01b9f1e0
// Size: 1028 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01b9f4cb) */
/* WARNING: Removing unreachable block (ram,0x01b9f51f) */
/* WARNING: Removing unreachable block (ram,0x01b9f52c) */
/* WARNING: Removing unreachable block (ram,0x01b9f3e1) */
/* WARNING: Removing unreachable block (ram,0x01b9f575) */
/* WARNING: Removing unreachable block (ram,0x01b9f57e) */
/* WARNING: Removing unreachable block (ram,0x01b9f436) */
/* WARNING: Removing unreachable block (ram,0x01b9f5c4) */
/* WARNING: Removing unreachable block (ram,0x01b9f5cd) */
/* WARNING: Removing unreachable block (ram,0x01b9f21f) */
/* WARNING: Removing unreachable block (ram,0x01b9f228) */
/* WARNING: Removing unreachable block (ram,0x01b9f300) */
/* WARNING: Removing unreachable block (ram,0x01b9f320) */
/* WARNING: Removing unreachable block (ram,0x01b9f302) */
/* WARNING: Removing unreachable block (ram,0x01b9f322) */

void FUN_01b9f1e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *unaff_RDI;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  longlong local_50;
  char local_48;
  int local_38;
  
  lVar2 = local_50;
  (**(code **)(*unaff_RDI + 0x3f8))();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)unaff_RDI[0x1b];
  if (*(int *)(local_50 + 0xc) == 0) {
    (**(code **)(*plVar1 + 0x998))();
    plVar1 = (longlong *)unaff_RDI[0x1b];
    FUN_00e9aaa0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = (**(code **)(*unaff_RDI + 0x698))();
    if (cVar3 != '\0') {
      (**(code **)(*unaff_RDI + 0x688))();
    }
    (**(code **)(*plVar1 + 0x998))();
    local_50 = 0;
    local_38 = -1;
    local_58 = DAT_02391074;
    local_54 = DAT_02391078;
    fVar6 = local_58;
    while( true ) {
      local_58 = fVar6;
      lVar4 = (longlong)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_38) break;
      local_50 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar2 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar6 = (float)FUN_01265b60();
      fVar7 = fVar6;
      if (local_54 <= fVar6) {
        fVar7 = local_54;
      }
      local_54 = fVar7;
      if (fVar6 <= local_58) {
        fVar6 = local_58;
      }
    }
    FUN_00083b20();
    if (*(int *)(lVar2 + 0xc) == 1) {
      plVar1 = (longlong *)unaff_RDI[0x1b];
      (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x378))(local_54);
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar1 = (longlong *)unaff_RDI[0x1b];
      if ((local_54 != local_58) || (NAN(local_54) || NAN(local_58))) {
        FUN_00e99dd0();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x378))();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d50b20();
  return;
}


