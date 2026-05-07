// Function: FUN_019a9c40
// Address: 019a9c40
// Size: 838 bytes
// Class: MUEditorElementView

int64_t * FUN_019a9c40(uint64_t param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar6;
  bool bVar7;
  int64_t local_d8;
  char local_d0;
  uint64_t local_78;
  int64_t local_58;
  char local_50;
  uint64_t local_40;
  int64_t local_38;
  
  local_78 = 0;
  if (((param_2 == 0) || ((int64_t *)arg1[0x69] == (int64_t *)0x0)) ||
     (cVar2 = (**(code **)(*(int64_t *)arg1[0x69] + 0xb0))(), cVar2 == '\0')) {
    local_40 = 0;
    lVar4 = arg1[0x3d];
    if (lVar4 != 0) goto LAB_019a9cdd;
LAB_019a9cb7:
    *(void*)(this_ptr + 1) = 0;
LAB_019a9cbf:
    local_38 = 0;
  }
  else {
    local_78 = (**(code **)(*(int64_t *)arg1[0x69] + 0xc0))();
    local_40 = (**(code **)(*(int64_t *)arg1[0x69] + 0xd0))();
    lVar4 = arg1[0x3d];
    if (lVar4 == 0) goto LAB_019a9cb7;
LAB_019a9cdd:
    if (*(int *)(lVar4 + 0xc) < 1) {
      bVar1 = false;
      local_38 = 0;
    }
    else {
      iVar6 = 0;
      local_38 = 0;
      bVar1 = false;
      do {
        lVar5 = lVar4;
        cVar2 = (**(code **)(*arg1 + 0x9a0))();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific((void*)lVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*arg1 + 0x9f0))();
          FUN_019a9940(local_78,local_40);
          if (local_d8 == local_38) {
            if (local_d0 != '\0') {
              if ((!bVar1) && (local_d8 != 0)) {
                bVar1 = true;
                FUN_00d50b00();
              }
              bVar7 = local_38 == 0;
              goto joined_r0x019a9ec9;
            }
            bVar7 = local_38 == 0;
          }
          else {
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_38 != 0)) {
              FUN_00d50b20();
            }
            bVar7 = local_d8 == 0;
            local_38 = local_d8;
            if (local_d0 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
joined_r0x019a9ec9:
              if (local_d8 != 0) {
                FUN_00d50b20();
              }
            }
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (!bVar7) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170();
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) {
      *this_ptr = local_38;
      goto LAB_019a9f75;
    }
    if (local_38 == 0) goto LAB_019a9cbf;
    FUN_00d50b00();
  }
  *this_ptr = local_38;
LAB_019a9f75:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

