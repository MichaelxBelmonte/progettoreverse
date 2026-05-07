// Function: FUN_017d4800
// Address: 017d4800
// Size: 1876 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_017d4800(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t local_88;
  char local_80;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  char local_40;
  
  lVar1 = g_027d3908;
  plVar5 = (int64_t *)**(void**)(*param_2 + 0x10);
  if (g_027d3908 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar5 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027d3910;
  if (cVar3 == '\0') {
    plVar5 = (int64_t *)**(void**)(*param_2 + 0x10);
    if (g_027d3910 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar5 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_0277cf68;
    if (cVar3 != '\0') {
      plVar5 = *(int64_t **)(*(int64_t *)(*param_2 + 0x10) + 8);
      if (g_0277cf68 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar5 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027feca0;
      if (cVar3 == '\0') {
        plVar5 = *(int64_t **)(*(int64_t *)(*param_2 + 0x10) + 8);
        if (g_027feca0 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar5 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        local_88 = g_027d3928;
        if (cVar3 == '\0') goto LAB_017d4e40;
        if (g_027d3928 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        lVar1 = *(int64_t *)(arg1 + 0x100);
        if (lVar1 != 0) {
          local_80 = '\0';
          local_88 = 0;
          if (0 < *(int *)(lVar1 + 0xc)) {
            lVar6 = 0;
            do {
              local_88 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015076e0();
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0190f150();
              lVar2 = g_027d3920;
              if (g_027d3920 != 0) {
                FUN_00d50b00();
              }
              (**(code **)(*local_48 + 0x50))();
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              lVar6 = lVar6 + 1;
            } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
          }
          FUN_017d9a00();
        }
        FUN_00d46530();
        *(void*)(this_ptr + 1) = 0;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
            *this_ptr = local_88;
            *(void*)(this_ptr + 1) = 1;
            return this_ptr;
          }
          local_88 = 0;
        }
      }
      *this_ptr = local_88;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
    goto LAB_017d4e40;
  }
  lVar1 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_017d4380();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_017d4b20;
    }
  }
  else if (local_88 != 0) {
LAB_017d4b20:
    lVar6 = 0;
    while ((int)lVar6 < *(int *)(local_88 + 0xc)) {
      plVar5 = *(int64_t **)(*(int64_t *)(local_88 + 0x10) + lVar6 * 8);
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507640();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017c5ee0();
      cVar3 = (**(code **)(*local_48 + 0x50))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      if (cVar3 != '\0') {
        if (*(int *)(*param_2 + 0xc) < 3) {
          *(void*)(this_ptr + 1) = 0;
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *this_ptr = (int64_t)plVar5;
          *(void*)(this_ptr + 1) = 1;
          FUN_017d9a00();
          FUN_00d50b20();
          if (lVar1 == 0) {
            return this_ptr;
          }
          FUN_00d50b20();
          return this_ptr;
        }
        FUN_0009d720();
        if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00d23690();
        pvVar4 = _pthread_getspecific(param_1);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0xa0))();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_017d9a00();
        FUN_00d50b20();
        if (lVar1 == 0) {
          return this_ptr;
        }
        FUN_00d50b20();
        return this_ptr;
      }
    }
    FUN_017d9a00();
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_017d4e40:
  FUN_00d56410();
  return this_ptr;
}

