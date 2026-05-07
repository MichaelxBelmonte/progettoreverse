// Function: FUN_006500a0
// Address: 006500a0
// Size: 1185 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x0065022e) */
/* WARNING: Removing unreachable block (ram,0x00650292) */

void FUN_006500a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_e0;
  undefined1 local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50 [8];
  char local_48 [8];
  char local_40 [8];
  char local_38;
  
  local_e0 = *param_2;
  if (local_e0 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_d8 = 0;
  local_70 = param_2;
  FUN_0064fb00(param_1,&local_e0);
  plVar7 = local_58;
  pVar5 = (pthread_key_t)param_1;
  local_48[0] = local_50[0];
  pcVar3 = local_48;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = plVar7;
  local_d0 = plVar7;
  local_c8 = 0;
  FUN_00642e80();
  plVar7 = local_58;
  local_40[0] = local_50[0];
  pcVar3 = local_40;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar7;
  local_38 = '\0';
  FUN_0063f230();
  if (local_58 == (longlong *)0x0) {
LAB_0065023c:
    plVar7 = local_68;
    FUN_004405c0();
    if (local_58 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = local_58;
      if (local_50[0] == '\0') {
        local_38 = '\0';
      }
      else {
        local_38 = '\x01';
        local_50[0] = '\0';
      }
    }
  }
  else {
    FUN_0063f230();
    lVar1 = CONCAT71(uStack_7f,local_80);
    cVar2 = FUN_00212c70();
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_0065023c;
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_58 + 0x450))();
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_0065023c;
    FUN_004405f0();
    plVar7 = local_68;
    if (local_58 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      local_38 = local_50[0] != '\0';
      plVar6 = local_58;
      if ((bool)local_38) {
        local_50[0] = '\0';
      }
    }
  }
  local_c0 = *local_70;
  local_b8 = '\0';
  FUN_004b8020();
  plVar8 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_004a1190();
    if (cVar2 != '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x006503dc;
    }
    local_b0 = *local_70;
    local_a8 = '\0';
    FUN_003b6860();
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
      if (local_50[0] == '\0') {
        FUN_00d50b00();
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_a0 = *local_70;
    local_98 = '\0';
    FUN_004f9670();
    pcVar3 = &local_80;
    if (local_50[0] != '\0') {
      pcVar3 = local_50;
    }
    local_80 = local_50[0];
    *pcVar3 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_88 = '\0';
    local_90 = plVar8;
    FUN_004b7a60();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x006503dc:
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


