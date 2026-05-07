// Function: FUN_01cb4c70
// Address: 01cb4c70
// Size: 1116 bytes
// Class: Unknown


void FUN_01cb4c70(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_90;
  longlong *local_80;
  char local_78;
  undefined4 local_3c;
  
  FUN_01cb6940();
  plVar2 = local_80;
  if ((local_78 == '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar2 != (longlong *)0x0) {
    if (0 < *(int *)((longlong)plVar2 + 0xc)) {
      lVar5 = 0;
      do {
        plVar4 = *(longlong **)(plVar2[2] + lVar5 * 8);
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        lVar1 = DAT_02774d50;
        if (DAT_02774d50 != 0) {
          FUN_00d50b00();
        }
        local_190 = lVar1;
        local_188 = '\x01';
        local_180 = 0;
        local_178 = '\0';
        (**(code **)(*plVar4 + 0x4f0))(&local_180,&local_190);
        if (local_80 == plVar4) {
LAB_01cb4da8:
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar4 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            goto LAB_01cb4da8;
          }
          FUN_00d50b20();
          local_78 = '\0';
        }
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          local_168 = '\0';
          local_170 = plVar4;
          FUN_00ca94c0();
          plVar3 = local_80;
          if (local_78 == '\0') {
            if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
               (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_78 = '\0';
          }
          if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar1 = DAT_027fec90;
          if (plVar3 != (longlong *)0x0) {
            if (DAT_027fec90 != 0) {
              FUN_00d50b00();
            }
            local_160 = lVar1;
            local_158 = '\x01';
            FUN_000175c0();
            local_c0 = local_80;
            if (local_78 == '\0') {
              if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
                 (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_78 = '\0';
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            if (local_c0 != (longlong *)0x0) {
              local_150 = local_c0;
              local_148 = '\0';
              FUN_00c80cd0();
              local_90 = local_80;
              if (local_80 == (longlong *)0x0) {
                local_3c = 1;
                local_90 = (longlong *)0x0;
              }
              else if (local_78 == '\0') {
                FUN_00d50b00();
                local_3c = 0;
                if ((local_78 != '\0') && (local_3c = 0, local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  local_3c = 0;
                }
              }
              else {
                local_78 = '\0';
                local_3c = 0;
              }
              if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)local_3c == '\0') {
                FUN_00c811e0();
                local_b8 = local_80;
                plVar3 = local_80;
                if ((((local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
                    (FUN_00d50b00(), plVar3 = local_b8, local_78 != '\0')) &&
                   (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*plVar3 + 0x18))();
                local_138 = '\0';
                local_140 = plVar4;
                (**(code **)(*plVar3 + 0x440))();
                if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01cb3d60();
                FUN_00d50b20();
                if ((char)local_3c == '\0') {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((longlong)plVar2 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}


