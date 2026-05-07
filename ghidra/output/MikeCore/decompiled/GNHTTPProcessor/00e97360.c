// Function: FUN_00e97360
// Address: 00e97360
// Size: 531 bytes
// Class: GNHTTPProcessor
// String references:
//   "com.celemony.%@.%s"


/* WARNING: Removing unreachable block (ram,0x00e974bb) */
/* WARNING: Removing unreachable block (ram,0x00e974c8) */

void FUN_00e97360(void)

{
  char *pcVar1;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  FUN_00dec0e0();
  (**(code **)(*local_80 + 0x368))();
  FUN_00d23310();
  pcVar1 = local_38;
  if (local_68[0] != '\0') {
    pcVar1 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar1 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8a060();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_38[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_68[0] = '\x02';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_58 = 0;
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_60 = local_48;
  local_58 = '\x01';
  FUN_00d8cb40();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00e972c0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}


