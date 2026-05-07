// Function: FUN_0014df90
// Address: 0014df90
// Size: 978 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x0014e155) */
/* WARNING: Removing unreachable block (ram,0x0014e162) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014df90(float param_1)

{
  double dVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 in_RCX;
  uint uVar5;
  longlong *plVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar7;
  double dVar8;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  iVar2 = (**(code **)(*(longlong *)unaff_RDI[0x3f] + 0x920))();
  (**(code **)(*unaff_RDI + 0x948))();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x948))();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  plVar6 = local_40;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  dVar1 = (double)(**(code **)(*plVar6 + 0x398))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(DAT_02390124,0,0);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  while( true ) {
    pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bcc0();
    in_RCX = 0;
    dVar8 = (double)FUN_016c46a0(0,0);
    if (dVar1 < dVar8) break;
    fVar7 = (float)(dVar8 * (double)*(float *)((longlong)unaff_RDI + 0x15c));
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar7,0,fVar7,(int)unaff_RDI[0x2b]);
  }
  if (iVar2 != 0) {
    FUN_01cfbee0(0,0,DAT_02390124);
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = 0x708;
    do {
      uVar5 = uVar5 + 100;
      fVar7 = (float)(int)(*(float *)(unaff_RDI + 0x2b) -
                          ((float)(int)uVar5 + DAT_02394240 + _DAT_0239420c) *
                          *(float *)(unaff_RDI + 0x2c));
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(0,fVar7,(float)(int)param_1,fVar7);
    } while (uVar5 < 0x2e7c);
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


