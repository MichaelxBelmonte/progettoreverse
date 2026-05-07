// Function: FUN_00caf340
// Address: 00caf340
// Size: 1359 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00caf340(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_38;
  char local_30;
  
  if (param_2 < 0xb) {
    if ((0x129U >> (param_2 & 0x1f) & 1) == 0) {
      if ((0x252U >> (param_2 & 0x1f) & 1) == 0) {
        if (param_2 == 10) {
          if ((this_ptr[8] != 0) && (cVar2 = FUN_00db3690(), cVar2 == '\0')) {
            FUN_00cbb5a0();
            *(void*)((int64_t)this_ptr + 0xe1) = 1;
            *(int *)((int64_t)this_ptr + 0xe4) = *(int *)((int64_t)this_ptr + 0xe4) + 1;
            FUN_00db32a0();
            (**(code **)(*this_ptr + 0x3c8))();
          }
          if (this_ptr[0x22] != 0) {
            plVar3 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar3 + 0x18))();
            lVar1 = this_ptr[0x22];
            if (lVar1 != 0) {
              FUN_00d50b00();
              local_38 = g_027855e8;
              if (g_027855e8 != 0) {
                FUN_00d50b00();
              }
              local_30 = '\0';
              FUN_00ca0840();
              if (local_38 != 0) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            lVar1 = this_ptr[0x23];
            if (lVar1 != 0) {
              FUN_00d50b00();
              local_38 = g_02773400;
              if (g_02773400 != 0) {
                FUN_00d50b00();
              }
              local_30 = '\0';
              FUN_00ca0840();
              if (local_38 != 0) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00d403d0();
            local_b8 = g_02773408;
            if (g_02773408 != 0) {
              FUN_00d50b00();
            }
            local_b0 = '\x01';
            FUN_00d50b00();
            local_a0 = '\0';
            local_a8 = plVar3;
            FUN_00d40470(&local_a8,&stack0xffffffffffffffb8,1,3);
            if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (this_ptr != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_30 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
            }
            if (this_ptr[0x22] != 0) {
              this_ptr[0x22] = 0;
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
      }
      else {
        if (0 < (int)this_ptr[0xe]) {
          *(int *)(this_ptr + 0xe) = (int)this_ptr[0xe] + -1;
          (**(code **)(*this_ptr + 0x3c8))();
        }
        if (this_ptr[0x22] != 0) {
          plVar3 = (int64_t *)FUN_00e8fc40();
          FUN_00022d50();
          (**(code **)(*plVar3 + 0x18))();
          lVar1 = this_ptr[0x22];
          if (lVar1 != 0) {
            local_90 = 0;
            FUN_00d50b00();
            local_38 = g_027855e8;
            local_90 = '\x01';
            local_98 = lVar1;
            if (g_027855e8 != 0) {
              FUN_00d50b00();
            }
            local_30 = '\0';
            FUN_00ca0840();
            if (local_38 != 0) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar1 = this_ptr[0x23];
          if (lVar1 != 0) {
            local_80 = 0;
            FUN_00d50b00();
            local_38 = g_02773400;
            local_80 = '\x01';
            local_88 = lVar1;
            if (g_02773400 != 0) {
              FUN_00d50b00();
            }
            local_30 = '\0';
            FUN_00ca0840();
            if (local_38 != 0) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d403d0();
          lVar1 = g_02773408;
          if (g_02773408 != 0) {
            FUN_00d50b00();
          }
          FUN_00d50b00();
          local_c0 = '\0';
          local_c8 = plVar3;
          FUN_00d40470(&local_c8,&stack0xffffffffffffff88,1,3);
          if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
          if (this_ptr[0x22] != 0) {
            this_ptr[0x22] = 0;
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00cbb5a0();
      *(void*)((int64_t)this_ptr + 0xe1) = 1;
      *(int *)((int64_t)this_ptr + 0xe4) = *(int *)((int64_t)this_ptr + 0xe4) + 1;
      *(int *)(this_ptr + 0xe) = (int)this_ptr[0xe] + 1;
    }
  }
  if ((int)this_ptr[0xe] < 0) {
    *(void*)(this_ptr + 0xe) = 0;
  }
  return;
}

