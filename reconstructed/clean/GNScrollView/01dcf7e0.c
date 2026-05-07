// Function: FUN_01dcf7e0
// Address: 01dcf7e0
// Size: 994 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


int64_t * FUN_01dcf7e0(int param_1,int param_2)

{
  int64_t *plVar1;
  code *pcVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar6;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  
  lVar5 = *(int64_t *)
           (*(int64_t *)
             (*(int64_t *)
               (*(int64_t *)(*(int64_t *)(arg1 + 0x178) + 0x10) + (int64_t)param_1 * 8) +
             0x10) + (int64_t)param_2 * 8);
  if (lVar5 == 0) {
    bVar3 = false;
    bVar6 = false;
    if (g_028b8a78 == 0) goto LAB_01dcf887;
  }
  else {
    FUN_00d50b00();
    bVar3 = true;
    bVar6 = true;
    if (g_028b8a78 == lVar5) {
LAB_01dcf887:
      bVar3 = bVar6;
      plVar1 = *(int64_t **)(arg1 + 0x1f8);
      if (plVar1 == (int64_t *)0x0) {
        pcVar2 = *(code **)(arg1 + 0x188);
        if (pcVar2 != 0x0) {
          FUN_00d50b00();
          local_68 = 0;
          local_70 = *(int64_t *)(arg1 + 400);
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          local_68 = '\x01';
          (*pcVar2)(param_1,param_2,&local_70);
          if (local_50 == lVar5) {
LAB_01dcfab7:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              bVar6 = lVar5 != 0;
              lVar5 = local_50;
              if (bVar6) {
                FUN_00d50b20();
              }
              goto LAB_01dcfab7;
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            bVar3 = true;
            lVar5 = local_50;
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (arg1 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
        local_b0 = *(int64_t *)
                    (*(int64_t *)(*(int64_t *)(arg1 + 0x160) + 0x10) + (int64_t)param_1 * 8)
        ;
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        (**(code **)(*plVar1 + 0x20))(param_2,&stack0xffffffffffffff70,&local_b0);
        if (local_50 == lVar5) {
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          bVar6 = lVar5 != 0;
          lVar5 = local_50;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          bVar3 = true;
          lVar5 = local_50;
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (arg1 != 0) {
          FUN_00d50b20();
        }
      }
      lVar4 = g_028b8a78;
      if (lVar5 == 0) {
        if (g_028b8a78 != 0) {
          FUN_00d50b00();
          lVar5 = lVar4;
LAB_01dcfb9a:
          *(void*)(this_ptr + 1) = 0;
          goto LAB_01dcfba3;
        }
        lVar5 = 0;
      }
      else if (g_028b8a78 == lVar5) {
        if (!bVar3) {
          FUN_00d50b00();
          goto LAB_01dcfb9a;
        }
        bVar3 = true;
      }
      else {
        local_98 = '\0';
        local_a0 = lVar5;
        FUN_00d233f0();
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar3) && (lVar5 != 0)) {
    FUN_00d50b00();
  }
LAB_01dcfba3:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

