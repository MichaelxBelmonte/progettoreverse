// Function: FUN_01f46240
// Address: 01f46240
// Size: 2025 bytes
// Class: GNInfoController

void* FUN_01f46240(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_90 = param_2;
  FUN_00d30620();
  if (local_40 == (int64_t *)0x0) {
    bVar5 = false;
  }
  else {
    FUN_00d30620();
    FUN_00d305f0();
    bVar5 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = local_40;
  if (bVar5) {
    FUN_00d30620();
    FUN_00d305f0();
    local_80 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_80 = '\x01';
    local_88 = local_50;
    (**(code **)(*arg1 + 0x618))(param_1,&local_88);
    if (local_40 == (int64_t *)0x0) {
      bVar4 = 1;
      plVar3 = (int64_t *)0x0;
      bVar5 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = 0;
      bVar5 = true;
    }
    else {
      local_38 = '\0';
      bVar5 = true;
      bVar4 = 0;
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x3a0))();
    if (cVar1 == '\0') goto LAB_01f464de;
    local_c0 = *local_90;
    local_b8 = '\0';
    (**(code **)(*plVar3 + 0x400))(param_1,&local_c0);
    if (local_40 == plVar3) {
      bVar6 = bVar5;
      if ((bool)(bVar4 & local_40 != (int64_t *)0x0)) {
        if (local_38 != '\0') goto LAB_01f46441;
        FUN_00d50b00();
        bVar6 = true;
      }
LAB_01f4648d:
      bVar5 = bVar6;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar6 = true;
        plVar3 = local_40;
        if (bVar5) {
          FUN_00d50b20();
        }
        goto LAB_01f4648d;
      }
      plVar3 = local_40;
      if (bVar5) {
        FUN_00d50b20();
      }
LAB_01f46441:
      local_38 = '\0';
      bVar5 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x398))();
    if (cVar1 == '\0') goto LAB_01f464de;
LAB_01f4695d:
    *(void*)(this_ptr + 1) = 0;
    if (!bVar5) {
      FUN_00d50b00();
    }
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    bVar5 = false;
    plVar3 = (int64_t *)0x0;
LAB_01f464de:
    FUN_00d30660();
    FUN_00d305f0();
    local_70 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = '\x01';
    local_78 = local_50;
    (**(code **)(*arg1 + 0x618))(param_1,&local_78);
    if (local_40 == plVar3) {
      bVar6 = bVar5;
      if ((!bVar5) && (local_40 != (int64_t *)0x0)) {
        plVar2 = plVar3;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01f465a4;
        }
        goto LAB_01f46573;
      }
joined_r0x01f465b3:
      plVar2 = plVar3;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar6 = true;
        if ((bVar5) && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar3 = local_40;
LAB_01f465a4:
          bVar6 = true;
          goto joined_r0x01f465b3;
        }
      }
      else {
        if ((bVar5) && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f46573:
        local_38 = '\0';
        bVar6 = true;
      }
    }
    plVar3 = plVar2;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x3a0))();
    if (cVar1 != '\0') {
      local_b0 = *local_90;
      local_a8 = '\0';
      (**(code **)(*plVar3 + 0x400))(param_1,&local_b0);
      if (local_40 == plVar3) {
        if ((!bVar6) && (local_40 != (int64_t *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01f466f3;
          }
          goto LAB_01f46720;
        }
joined_r0x01f469d5:
        bVar5 = bVar6;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (bVar6) {
          FUN_00d50b20();
          plVar3 = local_40;
LAB_01f466f3:
          bVar6 = true;
          goto joined_r0x01f469d5;
        }
        plVar3 = local_40;
        bVar5 = true;
      }
      else {
        plVar3 = local_40;
        if (bVar6) {
          FUN_00d50b20();
        }
LAB_01f46720:
        local_38 = '\0';
        bVar5 = true;
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      cVar1 = (**(code **)(*plVar3 + 0x398))();
      bVar6 = bVar5;
      if (cVar1 != '\0') goto LAB_01f4695d;
    }
    (**(code **)(*arg1 + 0x610))();
    if (local_40 == plVar3) {
      bVar5 = bVar6;
      if ((bVar6) || (local_40 == (int64_t *)0x0)) {
joined_r0x01f468c9:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar5 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01f467da;
        }
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar5 = true;
      plVar3 = local_40;
      if (bVar6) {
        FUN_00d50b20();
LAB_01f467da:
        bVar5 = true;
        goto joined_r0x01f468c9;
      }
    }
    else {
      bVar5 = true;
      plVar3 = local_40;
      if (bVar6) {
        FUN_00d50b20();
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x3a0))();
    if (cVar1 != '\0') {
      local_a0 = *local_90;
      local_98 = '\0';
      (**(code **)(*plVar3 + 0x400))(param_1,&local_a0);
      if (local_40 == plVar3) {
        if ((!bVar5) && (local_40 != (int64_t *)0x0)) {
          if (local_38 != '\0') goto LAB_01f4692b;
          bVar5 = true;
          FUN_00d50b00();
        }
LAB_01f468d7:
        bVar6 = local_38 == '\0';
joined_r0x01f46a0e:
        if ((!bVar6) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (bVar5) {
            FUN_00d50b20();
            bVar5 = true;
            plVar3 = local_40;
            goto LAB_01f468d7;
          }
          bVar5 = true;
          bVar6 = true;
          plVar3 = local_40;
          goto joined_r0x01f46a0e;
        }
        plVar3 = local_40;
        if (bVar5) {
          FUN_00d50b20();
        }
LAB_01f4692b:
        bVar5 = true;
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      cVar1 = (**(code **)(*plVar3 + 0x398))();
      if (cVar1 != '\0') goto LAB_01f4695d;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

