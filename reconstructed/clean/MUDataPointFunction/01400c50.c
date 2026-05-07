// Function: FUN_01400c50
// Address: 01400c50
// Size: 558 bytes
// Class: MUDataPointFunction

int64_t * FUN_01400c50(int64_t *param_1,int64_t *param_2,byte param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint local_4c;
  int64_t local_48;
  char local_40;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar6 = 0;
      local_4c = (uint)param_3;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
        cVar5 = (**(code **)(*(int64_t *)*param_1 + 0x50))();
        if (cVar5 == '\0') {
          local_68 = '\0';
          local_60 = *param_1;
          local_58 = '\0';
          local_70 = lVar2;
          FUN_00d98db0(&local_60,&local_70,local_4c);
          lVar4 = local_48;
          lVar2 = *arg1;
          if (lVar2 == local_48) {
            if (((char)arg1[1] == '\0') && (local_48 != 0)) {
              if (local_40 != '\0') goto LAB_01400da0;
              FUN_00d50b00();
              goto LAB_01400ddd;
            }
LAB_01400de5:
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar3 = arg1[1];
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
              *arg1 = lVar4;
              if (((char)lVar3 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_01400ddd:
              *(void*)(arg1 + 1) = 1;
              goto LAB_01400de5;
            }
            *arg1 = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
LAB_01400da0:
            *(void*)(arg1 + 1) = 1;
            local_40 = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_00018280();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *arg1;
  if ((char)arg1[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(arg1 + 1) = 0;
  }
  return this_ptr;
}

