// Function: FUN_0054ee90
// Address: 0054ee90
// Size: 1349 bytes
// Class: MDURLOpenedController


void FUN_0054ee90(double param_1,double param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  ulonglong uVar4;
  longlong lVar5;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  longlong local_48;
  char local_40;
  
  if (param_2 <= param_1) {
    return;
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x38);
  uVar4 = (ulonglong)*(uint *)(lVar6 + 0xc);
  if ((int)*(uint *)(lVar6 + 0xc) < 1) {
    bVar7 = false;
    lVar5 = 0;
joined_r0x0054f275:
    if (unaff_ESI == 0) {
      FUN_00361e20(param_1,param_2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0054ddf0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (unaff_ESI == 1) {
      FUN_00361f80(param_1,param_2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0054ddf0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_0054f40e:
    if ((bVar7) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    return;
  }
  dVar10 = DAT_023944d8 + param_1;
  dVar11 = DAT_02391030 + param_2;
  if (unaff_ESI == 1) {
    lVar1 = uVar4 - 1;
    lVar8 = 0;
    lVar5 = 0;
    bVar9 = false;
    bVar7 = false;
    lVar6 = **(longlong **)(lVar6 + 0x10);
    if (lVar6 == 0) goto LAB_0054f0b0;
    do {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar9) && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      while( true ) {
        lVar5 = lVar6;
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_00362260(dVar10,dVar11);
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_003623b0(param_1,param_2);
          FUN_0054e050();
          goto LAB_0054f40e;
        }
        if (lVar1 == lVar8) goto joined_r0x0054f275;
        lVar8 = lVar8 + 1;
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar8 * 8);
        bVar9 = bVar7;
        if (lVar5 != lVar6) break;
LAB_0054f0b0:
        lVar6 = lVar5;
        if ((!bVar7) && (lVar5 != 0)) {
          bVar7 = true;
          FUN_00d50b00();
        }
      }
    } while( true );
  }
  if (unaff_ESI != 0) {
    lVar1 = uVar4 - 1;
    lVar8 = 0;
    lVar5 = 0;
    bVar7 = false;
    lVar6 = **(longlong **)(lVar6 + 0x10);
    bVar9 = false;
    if (lVar6 != 0) goto LAB_0054f1af;
    do {
      lVar6 = lVar5;
      if ((!bVar7) && (lVar5 != 0)) {
        bVar7 = true;
        FUN_00d50b00();
      }
      while( true ) {
        lVar5 = lVar6;
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00362260(dVar10,dVar11);
        if (lVar1 == lVar8) goto joined_r0x0054f275;
        lVar8 = lVar8 + 1;
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar8 * 8);
        bVar9 = bVar7;
        if (lVar5 == lVar6) break;
LAB_0054f1af:
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar7 = true;
        if ((bVar9) && (lVar5 != 0)) {
          FUN_00d50b20();
        }
      }
    } while( true );
  }
  lVar1 = uVar4 - 1;
  lVar8 = 0;
  lVar5 = 0;
  bVar9 = false;
  bVar7 = false;
  lVar6 = **(longlong **)(lVar6 + 0x10);
  if (lVar6 == 0) goto LAB_0054ef60;
  do {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    bVar7 = true;
    if ((bVar9) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    while( true ) {
      lVar5 = lVar6;
      pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_00362260(dVar10,dVar11);
      if (cVar2 != '\0') {
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_003622e0(param_1,param_2);
        FUN_0054e050();
        goto LAB_0054f40e;
      }
      if (lVar1 == lVar8) goto joined_r0x0054f275;
      lVar8 = lVar8 + 1;
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar8 * 8);
      bVar9 = bVar7;
      if (lVar5 != lVar6) break;
LAB_0054ef60:
      lVar6 = lVar5;
      if ((!bVar7) && (lVar5 != 0)) {
        bVar7 = true;
        FUN_00d50b00();
      }
    }
  } while( true );
}


