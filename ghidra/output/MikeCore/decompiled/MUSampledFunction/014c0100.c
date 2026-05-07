// Function: FUN_014c0100
// Address: 014c0100
// Size: 652 bytes
// Class: MUSampledFunction


void FUN_014c0100(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  char unaff_SIL;
  longlong *unaff_RDI;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  char local_58;
  undefined4 local_50;
  char local_4c;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  plVar7 = param_1;
  local_50 = param_2;
  local_4c = unaff_SIL;
  (**(code **)(*unaff_RDI + 0x378))();
  lVar5 = local_40;
  pVar6 = (pthread_key_t)plVar7;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    (**(code **)(*unaff_RDI + 0x378))();
    lVar2 = local_40;
    lVar5 = *param_1;
    if (lVar5 == local_40) {
      if (((char)param_1[1] != '\0') || (local_40 == 0)) goto LAB_014c01e9;
      local_48 = param_1 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_014c01e2;
      }
    }
    else {
      local_48 = param_1 + 1;
      lVar1 = param_1[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_1 = lVar2;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_014c01e2:
        *(undefined1 *)local_48 = 1;
LAB_014c01e9:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014c01fd;
      }
      *param_1 = local_40;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)local_48 = 1;
  }
LAB_014c01fd:
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01334f30();
  if (cVar3 == '\0') {
    return;
  }
  local_60 = *param_1;
  local_58 = '\0';
  local_80 = 0;
  local_78 = 0;
  FUN_014c03f0(&local_60,&local_68,&local_80);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_4c != '\0') {
    lVar5 = (**(code **)(*unaff_RDI + 0x388))();
    if (lVar5 < local_70) {
      if (unaff_RDI[0x1d] != 0x7fffffffffffffff) {
        FUN_00d64850();
        unaff_RDI[0x1d] = 0x7fffffffffffffff;
        FUN_00d64910();
      }
      if (unaff_RDI[0x1e] == 0x7fffffffffffffff) goto LAB_014c0332;
      FUN_00d64850();
      unaff_RDI[0x1e] = 0x7fffffffffffffff;
    }
    else {
      if (unaff_RDI[0x1d] == local_70) goto LAB_014c0332;
      FUN_00d64850();
      unaff_RDI[0x1d] = local_70;
    }
    FUN_00d64910();
  }
LAB_014c0332:
  if ((((char)local_50 != '\0') && (cVar3 = (**(code **)(*unaff_RDI + 0x3c0))(), cVar3 == '\0')) &&
     (unaff_RDI[0x1e] != local_68)) {
    FUN_00d64850();
    unaff_RDI[0x1e] = local_68;
    FUN_00d64910();
  }
  return;
}


