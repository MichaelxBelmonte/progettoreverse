// Function: FUN_01b70050
// Address: 01b70050
// Size: 1772 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01b70050(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  void *pvVar4;
  void* pVar5;
  void*puVar6;
  char *pcVar7;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar8;
  double dVar9;
  uint8_t local_c8 [4];
  int iStack_c4;
  uint8_t local_c0 [4];
  int iStack_bc;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  double local_98;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  double local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  this_ptr[0x2f] = arg1;
  this_ptr[0x30] = param_2;
  this_ptr[0x31] = arg1;
  this_ptr[0x32] = param_2;
  (**(code **)(*this_ptr + 0x620))();
  cVar2 = (**(code **)(*this_ptr + 0x9d0))();
  if (cVar2 == '\0') goto LAB_01b70618;
  (**(code **)(*this_ptr + 0xa60))();
  if (local_48 == (int64_t *)0x0) {
    bVar8 = false;
  }
  else {
    (**(code **)(*this_ptr + 0x978))();
    bVar8 = local_58 != (int64_t *)0x0;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar8) goto LAB_01b70618;
  puVar6 = local_c0;
  FUN_01b70bd0(puVar6,local_c8);
  if ((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (*(int *)((int64_t)local_48 + 0xc) == 1) {
    if (iStack_c4 == 0) {
      local_60 = g_023b4830;
      if (iStack_bc != 0) goto LAB_01b701d2;
LAB_01b70263:
      local_98 = g_023b2568;
    }
    else {
      (**(code **)(*this_ptr + 0xa60))();
      pvVar4 = _pthread_getspecific((void*)puVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = (double)FUN_016c98e0();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iStack_bc == 0) goto LAB_01b70263;
LAB_01b701d2:
      (**(code **)(*this_ptr + 0xa60))();
      pvVar4 = _pthread_getspecific((void*)puVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = (double)FUN_016c98e0();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x978))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_58 + 0x20))();
    if (local_48 == (int64_t *)0x0) {
      bVar3 = 0;
    }
    else {
      (**(code **)(*this_ptr + 0x978))();
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *local_70 + 0x20))();
      bVar3 = (**(code **)(*local_80 + 0x50))();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = bVar3 ^ 1;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar3 != 0) {
      (**(code **)(*this_ptr + 0x978))();
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *local_58 + 0x20))();
      dVar9 = (double)(**(code **)(*local_48 + 0x68))();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((dVar9 < local_60) || (local_98 <= dVar9)) {
        if ((local_60 == g_023b4830) && (!NAN(local_60) && !NAN(g_023b4830))) {
          (**(code **)(*this_ptr + 0x978))();
          (**(code **)(*local_58 + 0x988))();
          iVar1 = *(int *)((int64_t)local_48 + 0xc);
          if (local_40[0] != '\0') {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_60 = 0.0;
          if (0 < iVar1) {
            (**(code **)(*this_ptr + 0x978))();
            (**(code **)(*local_70 + 0x988))();
            FUN_00d23310();
            pVar5 = (void*)CONCAT71((int7)((uint64_t)puVar6 >> 8),local_40[0]);
            pcVar7 = local_38;
            if (local_40[0] != '\0') {
              pcVar7 = local_40;
            }
            local_38[0] = local_40[0];
            *pcVar7 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8b60();
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_58 != (int64_t *)0x0) {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_60 = (double)FUN_012ebfe0();
              FUN_00d50b20();
            }
          }
          if (local_98 <= local_60) {
            (**(code **)(*this_ptr + 0x978))();
            local_60 = (double)(**(code **)(*local_48 + 0x940))();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        (**(code **)(*this_ptr + 0x978))();
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *local_58 + 0x20))();
        (**(code **)(*local_48 + 0x60))(local_60);
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d50b20();
LAB_01b70618:
  FUN_00d403d0();
  local_b8 = g_027e4df8;
  if (g_027e4df8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  FUN_00d50b00();
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d40470(&local_a8,&stack0xffffffffffffff70,1,3);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

