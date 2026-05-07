// Function: FUN_01aef330
// Address: 01aef330
// Size: 559 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aef330(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 uStack_64;
  float local_54;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  undefined8 local_38;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_68 = (float)param_1;
  FUN_01ad3cb0();
  plVar1 = local_40;
  if (((char)local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01a1d6e0();
  plVar2 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01aef543;
    FUN_00d50b00();
    if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) {
    if (plVar2 == (longlong *)0x0) goto LAB_01aef543;
  }
  else {
    local_68 = (float)(**(code **)(*unaff_RDI + 0x920))(uStack_64);
    pvVar3 = _pthread_getspecific(in_ECX);
    plVar5 = plVar1;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x3a8))(local_68);
    pvVar3 = _pthread_getspecific(in_ECX);
    plVar5 = plVar1;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    local_68 = (float)(**(code **)(*plVar5 + 0x3a0))();
    pvVar3 = _pthread_getspecific(in_ECX);
    plVar5 = plVar1;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    local_54 = (float)(**(code **)(*plVar5 + 0x3a0))();
    FUN_01a1d6e0();
    local_40 = (longlong *)(**(code **)(*local_50 + 0xa50))();
    local_38 = CONCAT44(uVar7,uVar6);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a1d6e0();
    (**(code **)(*local_50 + 0xa98))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_70 = local_54;
    local_6c = local_68 - local_54;
    (**(code **)(*plVar2 + 0xce0))((int)_DAT_0241c7c0,&local_70);
  }
  FUN_00d50b20();
LAB_01aef543:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


