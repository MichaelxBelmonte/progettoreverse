// Function: FUN_015b6740
// Address: 015b6740
// Size: 860 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015b6a1f) */
/* WARNING: Removing unreachable block (ram,0x015b6a28) */
/* WARNING: Removing unreachable block (ram,0x015b69e3) */
/* WARNING: Removing unreachable block (ram,0x015b69ec) */
/* WARNING: Removing unreachable block (ram,0x015b6a85) */
/* WARNING: Removing unreachable block (ram,0x015b6a92) */

void FUN_015b6740(double param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *in_RCX;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double local_98;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  longlong local_40;
  char local_38;
  
  plVar6 = (longlong *)*in_RCX;
  uVar1 = 0x10;
  local_54 = 2;
  local_98 = param_1;
  if (plVar6 != (longlong *)0x0) {
    plVar5 = in_RCX;
    if (param_3 == 0) {
      pvVar2 = _pthread_getspecific((pthread_key_t)in_RCX);
      if (pvVar2 != (void *)0x0) {
        plVar6 = (longlong *)*in_RCX;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar6 + 0x380))();
    }
    pVar4 = (pthread_key_t)plVar5;
    if ((param_1 == 0.0) && (!NAN(param_1))) {
      plVar6 = (longlong *)*in_RCX;
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        plVar6 = (longlong *)*in_RCX;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      local_98 = (double)(**(code **)(*plVar6 + 0x370))();
    }
    lVar3 = in_RCX[1];
    if (((char)lVar3 == '\0') || (*in_RCX == 0)) {
      if (*in_RCX == 0) goto LAB_015b6923;
    }
    else {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b100();
    local_54 = FUN_00b88630();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b100();
    uVar1 = FUN_00b86d10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((char)lVar3 != '\0') {
      FUN_00d50b20();
    }
  }
LAB_015b6923:
  FUN_00cddf30();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  uVar7 = FUN_00b82410(~-(ulonglong)(local_98 == 0.0) & (ulonglong)local_98 |
                       DAT_02410f78 & -(ulonglong)(local_98 == 0.0),local_54,uVar1,0);
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b00();
  }
  if (local_68 != 0) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  FUN_00b87ba0(uVar7,param_2);
  FUN_00b881a0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}


