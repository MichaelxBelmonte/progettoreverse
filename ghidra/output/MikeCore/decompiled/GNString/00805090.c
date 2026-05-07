// Function: FUN_00805090
// Address: 00805090
// Size: 982 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00805277) */
/* WARNING: Removing unreachable block (ram,0x00805283) */

ulonglong FUN_00805090(undefined4 param_1,int param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong *unaff_RDI;
  float fVar7;
  undefined8 uVar8;
  longlong local_a0;
  char local_98;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 == 0) goto LAB_00805452;
  FUN_00364b20();
  if (local_48 == 0) {
    uVar6 = 0;
    goto LAB_00805452;
  }
  if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(local_48 + 0xc) == 0) {
LAB_008052bf:
    uVar6 = 0;
  }
  else {
    FUN_00d23310();
    pVar4 = CONCAT31((int3)((uint)param_1 >> 8),local_40[0]);
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 == 0) goto LAB_008052bf;
    plVar1 = (longlong *)unaff_RDI[0x17];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x920))();
      (**(code **)(*plVar1 + 0x998))();
    }
    *(undefined1 *)(unaff_RDI + 0x1c) = 0;
    if ((longlong *)unaff_RDI[0x1b] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x968))();
    }
    (**(code **)(*unaff_RDI + 0x5e8))();
    FUN_00364bb0();
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    uVar2 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x920))();
    uVar8 = FUN_00802530();
    if ((local_70 == '\0') && (local_78 != 0)) {
      uVar8 = FUN_00d50b00();
    }
    FUN_00803100(uVar8,uVar2);
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((char)unaff_RDI[0x19] != '\0') {
      FUN_00364bb0();
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      fVar7 = (float)(**(code **)(*(longlong *)unaff_RDI[0x12] + 0x930))();
      FUN_00802530();
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
      }
      FUN_012762c0((double)fVar7);
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)local_78 >> 8),1);
    (**(code **)(*unaff_RDI + 0x5f0))();
  }
  FUN_00d50b20();
LAB_00805452:
  return uVar6 & 0xffffffff;
}


