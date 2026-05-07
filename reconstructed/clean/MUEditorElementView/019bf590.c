// Function: FUN_019bf590
// Address: 019bf590
// Size: 1166 bytes
// Class: MUEditorElementView

int64_t * FUN_019bf590(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t *this_ptr;
  int iVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t local_b0;
  char local_a8;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  
  cVar1 = FUN_019a9840();
  if (cVar1 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar4 = *param_2;
    if ((char)param_2[1] != '\0') {
      *this_ptr = lVar4;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return this_ptr;
    }
    if (lVar4 != 0) {
LAB_019bf618:
      FUN_00d50b00();
    }
LAB_019bf620:
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar4 = *param_2;
    if (lVar4 == 0) {
      *(void*)(this_ptr + 1) = 0;
      if ((char)param_2[1] == '\0') goto LAB_019bf620;
    }
    else {
      if (1 < *(int *)(lVar4 + 0xc)) {
        FUN_0025e9a0();
        if ((local_a8 == '\0') && (local_b0 != 0)) {
          FUN_00d50b00();
        }
        lVar4 = *param_2;
        if (lVar4 == 0) {
          *(void*)(this_ptr + 1) = 0;
          lVar4 = 0;
          bVar5 = false;
          if ((char)param_2[1] == '\0') {
LAB_019bfa09:
            *this_ptr = lVar4;
            *(void*)(this_ptr + 1) = 1;
            local_48 = 0;
            goto joined_r0x019bfa18;
          }
        }
        else {
          if (*(int *)(lVar4 + 0xc) < 1) {
            bVar5 = false;
            local_48 = 0;
          }
          else {
            iVar3 = 0;
            local_48 = 0;
            bVar5 = false;
            do {
              pvVar2 = _pthread_getspecific((void*)param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01274b60();
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              cVar1 = FUN_00d23d70();
              if (local_60 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 == '\0') {
                pvVar2 = _pthread_getspecific((void*)param_1);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01274b60();
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                FUN_00d21140();
                if (local_60 != 0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_48 == 0) {
                  FUN_00243390();
                  local_48 = local_60;
                  param_1 = local_60;
                  if (local_60 == 0) {
                    local_48 = 0;
                  }
                  else {
                    FUN_00d50b00();
                    bVar5 = true;
                  }
                }
                FUN_00d23f50();
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(lVar4 + 0xc));
          }
          FUN_001159b0();
          if (local_48 != 0) {
            *(void*)(this_ptr + 1) = 0;
            if (!bVar5) {
              FUN_00d50b00();
            }
            *this_ptr = local_48;
            *(void*)(this_ptr + 1) = 1;
            bVar5 = false;
            goto joined_r0x019bfa18;
          }
          lVar4 = *param_2;
          *(void*)(this_ptr + 1) = 0;
          if ((char)param_2[1] == '\0') {
            if (lVar4 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
            }
            goto LAB_019bfa09;
          }
        }
        *this_ptr = lVar4;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(param_2 + 1) = 0;
        local_48 = 0;
joined_r0x019bfa18:
        if (local_b0 != 0) {
          FUN_00d50b20();
        }
        if (!bVar5) {
          return this_ptr;
        }
        if (local_48 == 0) {
          return this_ptr;
        }
        FUN_00d50b20();
        return this_ptr;
      }
      *(void*)(this_ptr + 1) = 0;
      if ((char)param_2[1] == '\0') goto LAB_019bf618;
    }
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_2 + 1) = 0;
  }
  return this_ptr;
}

