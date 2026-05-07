// Function: FUN_0172d300
// Address: 0172d300
// Size: 1374 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0172d811) */
/* WARNING: Removing unreachable block (ram,0x0172d81a) */
/* WARNING: Removing unreachable block (ram,0x0172d34d) */
/* WARNING: Removing unreachable block (ram,0x0172d356) */
/* WARNING: Removing unreachable block (ram,0x0172d825) */
/* WARNING: Removing unreachable block (ram,0x0172d82e) */
/* WARNING: Removing unreachable block (ram,0x0172d403) */
/* WARNING: Removing unreachable block (ram,0x0172d40c) */
/* WARNING: Removing unreachable block (ram,0x0172d3c7) */
/* WARNING: Removing unreachable block (ram,0x0172d3d4) */
/* WARNING: Removing unreachable block (ram,0x0172d45a) */
/* WARNING: Removing unreachable block (ram,0x0172d463) */

void FUN_0172d300(pthread_key_t param_1)

{
  void *pvVar1;
  undefined8 *unaff_RDI;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_0172c390();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_40 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0172d411;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_0172d411:
    FUN_0172c110();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0172d468;
      }
LAB_0172d611:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      if (local_40 == (longlong *)0x0) goto LAB_0172d611;
LAB_0172d468:
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar2 = (double)FUN_012ebfe0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_012ebd30();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      dVar4 = dVar2;
      if (local_40 != (longlong *)0x0) {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_016c9870();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      dVar5 = dVar3;
      if (local_40 != (longlong *)0x0) {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_016c9950();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (dVar2 <= dVar4) {
        dVar4 = dVar2;
      }
      if (dVar5 <= dVar3) {
        dVar5 = dVar3;
      }
      (**(code **)(*local_40 + 0x378))(dVar4,dVar5 - dVar4);
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    FUN_00d50b20();
    goto LAB_0172d844;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_0172d844:
  FUN_00d50b20();
  return;
}


